#include <cstring>
#include <iostream>

using namespace std;

void showMenu();
void processChoice(char choice);

int main() {
  char choice;

  showMenu();
  cin >> choice;
  while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g') {
    cout << "Please enter true choice";
    cin >> choice;
  }

  processChoice(choice);
}
void showMenu() {
  cout << "Please enter one of the following choices:" << endl;
  cout << "c) carnivore p) pianist" << endl;
  cout << "t) tree g) game" << endl;
}

void processChoice(char choice) {
  switch (choice) {
    case 'c':
      cout << "A carnivore is an animal that eats meat." << endl;
      break;
    case 'p':
      cout << "A pianist is a person who plays the piano." << endl;
      break;
    case 't':
      cout << "A maple is a tree." << endl;
      break;
    case 'g':
      cout << "A game is an activity for entertainment." << endl;
      break;
  }
}