//  Fuel Efficiency Converter
// 将欧洲标准(L/100km)转换为美国标准(MPG)
#include <iomanip>  // 用于输出格式控制
#include <iostream>

using namespace std;

const double KM_PER_MILE = 1.60934;        // 1英里=1.60934公里
const double LITERS_PER_GALLON = 3.78541;  // 1加仑=3.78541升

int main() {
  double euEfficiency;  // 欧洲标准
  double usEfficiency;  // 美国标准
  cout << "Enter euEfficiency: ";
  cin >> euEfficiency;
  cout << euEfficiency << endl;
  usEfficiency = (100 * LITERS_PER_GALLON) / (KM_PER_MILE * euEfficiency);
}