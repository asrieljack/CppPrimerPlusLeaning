// Program File 5.15

#include <iostream>

using namespace std;
int main() {
  char ch;
  int count = 0;

  while (cin.get(ch)) {
    cout << ch;
    ++count;
    
  }
  cout << endl << count << "characters read\n";
  return 0;
}