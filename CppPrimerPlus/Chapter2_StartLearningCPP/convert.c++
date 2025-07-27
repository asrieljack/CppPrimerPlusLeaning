// Program File 2.6
// 自定义的有返回值的函数
#include <iostream>
#include <iterator>
int stonetolb(int);
int main() 
{
  using namespace std;
  int stone;
  cout << "enter a weight in stone: ";
  cin >> stone;
  int pounds = stonetolb(stone);
  cout << "stone=" << stone;
  cout << "pounds" << pounds << endl;
  return 0;
}
int stonetolb(int sts) { return 14 * sts; }