// Inches To Feet And Inches
#include <iostream>

using namespace std;
int main() {
  const int convert = 12;
  int feet;
  int inches;
  cout << "Enter your height: " << "_____\b\b\b\b\b";
  cin >> inches;
  cout << endl;
  cout << "convert to: ";
  feet = inches / convert;
  cout << feet << "feet " << inches % convert << "inches";
}