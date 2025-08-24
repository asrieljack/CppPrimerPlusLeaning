#include <cctype>
#include <iostream>
using namespace std;
int main() {
  char ch;
  int whiteSpace = 0;
  int digits = 0;
  int chars = 0;
  int punct = 0;
  int others = 0;

  cin.get(ch);
  while (ch != '@') {
    if (isalpha(ch)) {
      chars++;
    } else if (isspace(ch)) {
      whiteSpace++;
    } else if (isdigit(ch)) {
      digits++;
    } else if (ispunct(ch)) {
      punct++;
    } else {
      others++;
    }
    cin.get(ch);
  }
  cout << chars << "letters, " << whiteSpace << "whitespace," << digits
       << "digits," << punct << "punctuations," << others << "others\n";
  return 0;
}