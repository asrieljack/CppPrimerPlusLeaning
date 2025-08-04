#include <iostream>
#include <string>

using namespace std;
int main() {
  string surName, name, fullName;
  cout << "Enter your first  name: ";
  cin >> name;
  cout << endl;
  cout << "Enter your last name: ";
  cin >> surName;
  cout << endl;
  fullName += name;
  fullName += surName;
  cout << fullName;
  return 0;
}