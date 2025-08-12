
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  double d_dollar = 100, c_dollar = 100, d_profit = 0.10, c_profit = 0.05;
  int years = 0;
  double d_interest;
  double c_interest;
  while (true) {
    d_interest = d_dollar + (d_dollar * d_profit * years);
    c_interest = c_dollar * pow(1 + c_profit , years);
    cout << "第 " << years << " 年: "
         << "D = " << d_interest << " 美元, "
         << "C = " << c_interest << " 美元" << endl;
    if (c_interest > d_interest ) {
      break;
    }
    years++;
  }
}