// Chapter 2, Programming Exercise #6
// LightYear To AstronomicalUnit
double LightYearToAstronomicalUnit(double lightYears);
#include <iostream>
using namespace std;
int main() {
  double lightYears;
  cout << "Enter the number of light years: ";
  cin >> lightYears;
  cout << endl;
  cout << lightYears
       << "light years= " << LightYearToAstronomicalUnit(lightYears)
       << "astronomicalUnits";
  return 0;
}
double LightYearToAstronomicalUnit(double lightYears) {
  double astronomicalUnit;
  astronomicalUnit = lightYears * 63240;
  return astronomicalUnit;
}
