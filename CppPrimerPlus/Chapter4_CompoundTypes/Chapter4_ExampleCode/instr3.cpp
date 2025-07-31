// Program File 4.5
#include <iostream>
using namespace std;
int main() {
  using namespace std;
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name:\n";
  cin.get(name, ArSize).get();
  cout << "Enter your favorite dessert:\n";
  cin.get(dessert, ArSize).get();
  cout << "I have some " << dessert << " for you " << name << ".\n";
  return 0;
}