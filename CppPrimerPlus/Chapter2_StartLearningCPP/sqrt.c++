//Program File 2.4
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
  cout << "return:" << side<<endl;
  //有些函数需要多项信息，这些函数可以接收多个参数，参数间用逗号隔开
  double answer=pow(area,side);
  //pow接受两个参数，第一个参数为指数第二个参数为指数的幂
  cout <<"area to the power of side is:"<< answer<<endl;
  //还有些函数不接受任何参数
  // 例如rand函数，不接受任何参数并返回一个随机参数
  int random=rand();
  cout<<"rd num are:"<<random;
  return 0;
}