#include <array>
#include <cctype>
#include <iostream>
using namespace std;
int main() {
  array<double, 10> donation;
  int count=0  ;
  double total = 0.0;

  while (count < 10 && cin >> donation[count]) {
    total += donation[count];
    ++count;
  }
  if (count == 0) {
    return 0;
  }
  double average = total / count;
  int aboveAverage = 0;
  for (int i = 0; i < count; i++) {
    if (donation[i] > average) {
      aboveAverage++;
    }
  }
  cout << "平均值: " << average << endl;
  cout << "大于平均值的个数: " << aboveAverage << endl;
}