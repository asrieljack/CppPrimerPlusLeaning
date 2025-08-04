// Program File 4.13
#include <iostream>
struct inflatable {
  char name[20];
  float volume;
  double price;
};

// 也可以指定占用特定位数的结构成员
// 类型为整形或枚举，然后冒号：，冒号后是一个数字指定使用的位数
// 可以使用没有名称的字段提供间距。每个成员都被称为字段
struct torgle_register {
  unsigned int SN : 4;
  unsigned int : 4;
  bool goodIn : 1;
  bool goodTarget : 1;
};
int main() {
  using namespace std;
  inflatable guests[2]{{"Bambi", 0.5, 21.20}, {"Godzilla", 2000, 32.56}};
  cout << "The guests " << guests[0].name << " and " << guests[1].name
       << "\nhave a combined volume of " << guests[0].volume + guests[1].volume
       << " cubic feet.\n";
  return 0;
}