// Program File 2.5
// 自定义的函数
#include <iostream>
void sayNumber(int);
int main() 
{
  using namespace std;
  sayNumber(3);
  int count;
  cout << "please enter a number" << endl;
  cin >> count;
  sayNumber(count);
  cout << "end";
}
// void代表函数无返回值,int代表程序应该接受一个int类型的参数
void sayNumber(int n) 
{
  using namespace std;
  cout << "Say:" << n << endl;
}
