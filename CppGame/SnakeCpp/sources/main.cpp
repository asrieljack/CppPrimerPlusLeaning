#include <F:/DEV_ENV/tools/mingw64/include/easyx.h>
#include <conio.h>
#include <synchapi.h>
#include <windef.h>
#include <winuser.h>

#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

#include "../headers/compatibility.h"

// 精灵基类，表示游戏中的基本图形元素
class Sprite {
 protected:
  int m_x;           // x坐标
  int m_y;           // y坐标
  COLORREF m_color;  // 颜色

 public:
  Sprite() : Sprite(0, 0) {};
  Sprite(int x, int y) : m_x(x), m_y(y), m_color(GREEN) {};
  // 绘制精灵
  virtual void Draw() {
    setfillcolor(m_color);
    fillrectangle(m_x, m_y, m_x + 10, m_y + 10);
  }
  // 移动精灵
  void moveBy(int dx, int dy) {
    m_x += dx;
    m_y += dy;
  }
  // 碰撞检测
  bool collision(const Sprite& o) { return m_x == o.m_x && m_y == o.m_y; }
  int getX() const { return m_x; }
  int getY() const { return m_y; }
};

// 蛇类，继承自精灵
class Snake : public Sprite {
 private:
  std::vector<Sprite> nodes;  // 蛇身节点

 public:
  int dir;  // 移动方向

 public:
  Snake() : Snake(0, 0) {};
  // 初始化蛇，包含3个节点
  Snake(int x, int y) : Sprite(x, y), dir(VK_RIGHT) {
    nodes.push_back(Sprite(20, 0));
    nodes.push_back(Sprite(10, 0));
    nodes.push_back(Sprite(0, 0));
  }
  // 绘制整条蛇
  void Draw() override {
    for (int i = 0; i < nodes.size(); i++) {
      nodes[i].Draw();
    }
  }
  // 蛇身移动逻辑
  void bodyMove() {
    // 从尾部开始向前移动每个节点
    for (size_t i = nodes.size() - 1; i > 0; i--) {
      nodes[i] = nodes[i - 1];
    }

    // 根据方向移动头部
    switch (dir) {
      case VK_UP:
        nodes[0].moveBy(0, -10);
        break;
      case VK_DOWN:
        nodes[0].moveBy(0, 10);
        break;
      case VK_LEFT:
        nodes[0].moveBy(-10, 0);
        break;
      case VK_RIGHT:
        nodes[0].moveBy(10, 0);
        break;
    }
  }
  // 检测与食物的碰撞
  bool collision(const Sprite& o) { return nodes[0].collision(o); }
  // 增加蛇身长度
  void increaseMent() { nodes.push_back(Sprite()); }
  // 检测是否撞墙
  bool isHitWall() const {
    if (nodes.empty()) return false;

    int headX = nodes[0].getX();
    int headY = nodes[0].getY();

    // 检查是否撞到边界（640x480的窗口，每个格子10像素）
    return headX < 0 || headX >= 640 || headY < 0 || headY >= 480;
  }
  // 检测是否撞到自己
  bool isHitSelf() const {
    if (nodes.size() <= 3) return false;  // 长度小于等于3时不可能自撞

    int headX = nodes[0].getX();
    int headY = nodes[0].getY();

    // 检查头部是否与身体其他部分碰撞
    for (size_t i = 3; i < nodes.size(); i++) {
      if (nodes[i].getX() == headX && nodes[i].getY() == headY) {
        return true;
      }
    }
    return false;
  }
  // 获取蛇身长度（用于计算分数）
  int getLength() const { return nodes.size(); }
};

// 食物类，继承自精灵
class Food : public Sprite {
 public:
  Food() : Sprite(0, 0) { changePos(); };
  // 绘制食物（椭圆形）
  void Draw() override {
    setfillcolor(m_color);
    solidellipse(m_x, m_y, m_x + 10, m_y + 10);
  }
  // 随机改变食物位置
  void changePos() {
    m_x = rand() % 64 * 10;
    m_y = rand() % 48 * 10;
  }
};

// 游戏场景类，管理游戏逻辑
class GameScene {
 private:
  Snake snake;    // 蛇对象
  Food food;      // 食物对象
  bool gameOver;  // 游戏结束标志
  int score;      // 积分
  int baseScore;  // 基础分数（蛇的初始长度）

 public:
  GameScene()
      : gameOver(false), score(0), baseScore(3) {

        };
  // 主游戏循环
  void run() {
    // 游戏结束状态处理
    if (gameOver) {
      cleardevice();
      settextcolor(WHITE);
      settextstyle(40, 0, _T("Arial"));
      outtextxy(200, 200, _T("Game Over!"));

      // 显示最终分数
      TCHAR scoreText[50];
      _stprintf(scoreText, _T("Score: %d"), score);
      outtextxy(220, 250, scoreText);

      outtextxy(180, 300, _T("Press R to restart"));
      // 检测重新开始按键
      ExMessage msg = {0};
      if (peekmessage(&msg, EX_KEY) && msg.vkcode == 'R') {
        resetGame();
      }
      return;
    }

    // 双缓冲绘制
    BeginBatchDraw();
    cleardevice();

    // 绘制分数显示
    drawScore();

    snake.Draw();
    food.Draw();
    EndBatchDraw();

    snake.bodyMove();
    // 检查碰撞
    if (snake.isHitWall() || snake.isHitSelf()) {
      gameOver = true;
    }
    snakeEatFood();
    // 处理用户输入
    ExMessage msg = {0};
    while (peekmessage(&msg, EX_KEY)) {
      onMsg(msg);
    }
  }
  // 处理键盘消息
  void onMsg(const ExMessage& msg) {
    if (msg.message == WM_KEYDOWN) {
      switch (msg.vkcode) {
        case VK_UP:
          if (snake.dir != VK_DOWN) snake.dir = msg.vkcode;
          break;
        case VK_DOWN:
          if (snake.dir != VK_UP) snake.dir = msg.vkcode;
          break;
        case VK_LEFT:
          if (snake.dir != VK_RIGHT) snake.dir = msg.vkcode;
          break;
        case VK_RIGHT:
          if (snake.dir != VK_LEFT) snake.dir = msg.vkcode;
          break;
      }
    }
  }
  // 检测蛇吃食物
  void snakeEatFood() {
    if (snake.collision(food)) {
      snake.increaseMent();
      food.changePos();
      // 吃食物增加分数（每节身体10分）
      score = (snake.getLength() - baseScore) * 10;
    }
  }
  // 绘制分数
  void drawScore() {
    settextcolor(WHITE);
    settextstyle(20, 0, _T("Arial"));
    TCHAR scoreText[20];
    _stprintf(scoreText, _T("Score: %d"), score);
    outtextxy(10, 10, scoreText);
  }
  // 重置游戏
  void resetGame() {
    snake = Snake(0, 0);
    food = Food();
    gameOver = false;
    score = 0;  // 重置分数
  }
};

// 程序入口
int main() {
  initgraph(640, 480);     // 初始化图形窗口
  srand(time((nullptr)));  // 初始化随机数种子
  GameScene scene;         // 创建游戏场景
  while (true) {
    scene.run();  // 运行游戏
    Sleep(50);    // 控制游戏速度
  }

  getchar();
  return 0;
}