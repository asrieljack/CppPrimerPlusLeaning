// Program File 4.1
#include <array>
#include <iostream>
using namespace std;
int main() {
  long obj[50] = {0};  // 系统会把没有被赋值的下标所对应的值都初始化为0

  double earnings[4]{3.0, 5.6, 7.8, 3.7};  // 可以省略等号
  unsigned int counts[40] = {};            // all elements set to 0
  float balances[100]{};                   // all elements set to 0

  // long plifs[]{34,56,34,1.2}
  // --1.2是不被允许的，禁止不同类型数据在初始化的时候转换 char
  // slifs[4]{'h','u',303333132,'\o'}--同理，禁止在初始化过程转换缩窄转换
  char tlifs[4]{'h', 'y', 112, '\0'};  // 这样可以，112没有超出char的取值范围

  for (int i = 0; i <= 49; i++) {
    cout << obj[i];
  }
  return 0;
}