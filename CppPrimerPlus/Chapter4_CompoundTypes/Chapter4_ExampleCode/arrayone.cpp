// Program File 4.1
#include <iostream>
using namespace std;
int main() {
  int yams[3];
  yams[0] = 4;
  yams[1] = 5;
  yams[2] = 1;
  int yamCosts[3] = {114, 514, 1919810};
  cout << "yams[0]+yams[1]+yams[2]: " << yams[0] + yams[1] + yams[2] << endl;
  cout << yamCosts[0] << yamCosts[1] << yamCosts[2] << endl;
  cout << "yams sizeof: " << sizeof yams << endl;
  cout << "yamCosts sizeof: " << sizeof yamCosts << endl;
  return 0;
}