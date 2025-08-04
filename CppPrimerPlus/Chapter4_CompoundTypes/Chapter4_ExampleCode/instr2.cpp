// Program File 4.4
#include <iostream>
using namespace std;
int main() {
  using namespace std;
  const int ArSize = 20;
  //char name[ArSize];
  //char dessert[ArSize];
  string name;
  string dessert;
  cout << "Enter your name:\n";
  cin>>name;
  cout << "Enter your favorite dessert:\n";
  cin>>dessert;
  cout << "I have some " << dessert << " for you " << name << ".\n";
  return 0;
}