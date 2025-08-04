#include <array>
#include <iostream>

using namespace std;
int main() {
  array<double, 3> arr;
  cin >> arr[0];
  cin >> arr[1];
  cin >> arr[2];
  double average = (arr[0] + arr[1] + arr[2]) / 3;
}