
#include <iostream>
#include <utility>

using namespace std;

template <typename T>
void Swap(T& a, T& b);

int main() {
  int i = 10;
  int j = 20;
  Swap(i, j);
  cout << i << "," << j << endl;

  double x = 24.5;
  double y = 81.7;
  Swap(x, y);
  cout << x << "," << y << endl;
}

template <typename T>
void Swap(T& a, T& b) {
  T temp;
  temp = a;
  a = b;
  b = temp;
}