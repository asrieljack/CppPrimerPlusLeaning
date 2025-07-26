#include <cmath>
#include <iostream>
int main() {
  using namespace std;
  double area;
  cout << "please enter a number";
  cin >> area;
  double side;
  side = sqrt(area);
  //c++允许在创建变量时赋值，所以此处也可以写成double side=sqrt(area);
  cout << "return:" << side;
  return 0;
}