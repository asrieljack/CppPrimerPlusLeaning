// Program File 3.1
#include <limits.h>

#include <climits>
#include <iostream>

int main() {
  using namespace std;
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LONG_LONG_MAX;
  cout << "bytes---------";
  cout << "int: " << sizeof(n_int) << endl;
  cout << "short: " << sizeof(n_short) << endl;
  cout << "long: " << sizeof(n_long) << endl;
  cout << "llong: " << sizeof(n_llong) << endl;
  cout << "maximum values------";
  cout << "int: " << n_int << endl;
  cout << "short: " << n_short << endl;
  cout << "long: " << n_long << endl;
  cout << "llong: " << n_llong << endl;
}