#include <iostream>
#include <random>
#include <vector>
#include <Windows.h>
#include <consoleapi2.h>

using namespace std;

int main() {
  //UTF-8
  SetConsoleOutputCP(65001);
  SetConsoleCP(65001);

  // 随机数生成器
  random_device rd;
  mt19937 gen(rd());

  // 挑战的长度和难度和游戏模式
  int Size;
  int randomSize;
  cout << "Please Enter the length you want to challenge: ";
  cin >> Size;
  cout << endl;
  cout << "Please Enter the difficulty you want to challenge(Starting from "
          "1,Enter the maximum value of each random number): ";
  cin >> randomSize;
  cout << endl;

  uniform_int_distribution<int> int_dis1(1, randomSize);

  // 生成随机数
  vector<int> vec(Size);
  cout << "generated Size random numbers from 1 to " << randomSize<<endl;
  for (int i = 0; i < Size - 1; i++) {
    vec[i] = int_dis1(gen);
  }
  cout << Size << " number have been generated,Game Start----";

  /*调试:显示目标数字
  cout << "目标数字: ";
  for (int num : vec) {
    cout << num << " ";
  }
  cout << endl;*/ 

  //第几轮和玩家的输入
  int rounds = 0;
  vector<int> guess(Size);

  // 游戏开始
  while (true) {
    rounds++;
    cout << "\n" << rounds << "rounds - Please enter" << Size << "numbers: ";

    // 读取玩家输入
    for (int i = 0; i < Size; i++) {
      cin >> guess[i];
    }

    int correct = 0;
    for (int i = 0; i < Size; i++) {
      if (guess[i] == vec[i]) {
        ++correct;
      }
    }
    cout << "Correct: " << correct << "/" << Size << endl;

    // 显示哪些位置正确
    for (int i = 0; i < Size; i++) {
      cout << "Position" << i + 1 << ": ";
      if (guess[i] == vec[i]) {
        cout << "√";
      } else {
        cout << "✗";
      }
      cout << " ";
    }
    cout << endl;

    // 结束条件：全部猜对
    if (correct == Size) {
      cout << "\n Game Over!!use " << rounds << " rounds" << endl;
      break;  // 退出while循环
    }
  }

  return 0;
}