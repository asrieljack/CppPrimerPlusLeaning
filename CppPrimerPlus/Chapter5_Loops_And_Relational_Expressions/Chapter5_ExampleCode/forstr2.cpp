// Program File 5.8
#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << "Enter a word: ";
  string word;
  cin >> word;

  char temp;
  int i, j;
  for (j = 0, i = word.size() - 1; j < i; --i, ++j) {
    temp = word[i];
    word[i] = word[j];
    word[j] = temp;
  }
  cout << word<<"\nDown\n";
  i=20,j=i*2;//j=40;
  return 0;
}
