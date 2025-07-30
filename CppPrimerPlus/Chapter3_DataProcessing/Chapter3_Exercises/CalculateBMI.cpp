// Calculate BMI
#include <cmath>
#include <iostream>
#include <ostream>

double feetInchesToMeter(double feet, double inches);
double poundsToKilogram(double pounds);
double calculateBMI(double kilograms, double meter);
using namespace std;
int main() {
  double inches, feet, meter, pounds, kilograms, BMI;
  cout << "Enter your feet:______\b\b\b\b\b\b";
  cin >> feet;
  cout << endl;
  cout << "Enter your inches:______\b\b\b\b\b\b";
  cin >> inches;
  cout << endl;
  meter = feetInchesToMeter(feet, inches);
  cout << "Enter your pounds:______\b\b\b\b\b\b";
  cin >> pounds;
  cout << endl;
  kilograms = poundsToKilogram(pounds);
  BMI = calculateBMI(kilograms, meter);
  cout << "your BMI is: " << BMI;
}
double feetInchesToMeter(double feet, double inches) {
  double totalInches, meter;
  totalInches = (feet * 12) + inches;
  meter = totalInches * 0.0254;
  cout << "your feet is: " << feet << "and your inches is: " << inches
       << "your meter is: " << meter << endl;
  return meter;
}
double poundsToKilogram(double pounds) {
  double kilograms;
  kilograms = pounds * 0.453592;
  cout << "your pounds is: " << pounds << "and your kilograms is: " << kilograms
       << endl;
  return kilograms;
}
double calculateBMI(double kilograms, double meter) {
  double BMI;
  BMI = kilograms / pow(meter, 2);
  return BMI;
}