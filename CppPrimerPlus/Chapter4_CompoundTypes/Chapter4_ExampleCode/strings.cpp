// Program File 4.2
#include <cstring>
#include <iostream>
#include <string>

using namespace std;
int main() {
  char cat[5]{'a', 'c', 'a', 't', '\0'};  // 这是一个字符串
  char bird[11] = "Mr. Cheeps";
  char fish[] = "Buddles";

  const int Size = 14;
  char name1[Size];
  char name2[Size] = "C++boy";
  cout << "I'm " << name2 << endl;
  cout << "what's your name?" << endl;
  cout << "Ok,My name is ";
  cin >> name1;
  cout << name1 << endl;
  ;
  cout << "Your name has " << strlen(name1) << " letters and is stored\n";
  cout << "In an array of " << sizeof(name1) << " bytes.\n";
  name2[3] = '\0';
  cout << "Here are the first 3 characters of my name: ";
  cout << name2 << endl;
  return 0;
}