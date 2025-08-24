#include <cctype>
#include <iostream>
using namespace std;
int main() {
  int choice;
  cin >> choice;
  while (choice != 3) {
    switch (choice) {
      case 1:
        cout << "one";
        break;
      case 2:
        cout << "two";
        break;
      default:
        cout << "thas's not a choice";
    }
    cin >> choice;
  }

  return 0;
}