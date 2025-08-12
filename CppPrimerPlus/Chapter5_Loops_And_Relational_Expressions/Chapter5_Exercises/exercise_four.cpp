#include <array>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int i = 0;
  array<string, 12> months{"January",   "February", "March",    "April",
                           "May",       "June",     "July",     "August",
                           "September", "October",  "November", "December"};
  array<int, 12> monthsSales;
  while (true) {
    cout << months[i] << "Sale book: ";
    cin >> monthsSales[i];
    cout << endl;
    ++i;
    if (i >= 12) {
      break;
    }
  }
  int totals = 0;
  for (int j = 0; j < 12; ++j) {
    totals += monthsSales[j];
  }
  cout << totals;
}