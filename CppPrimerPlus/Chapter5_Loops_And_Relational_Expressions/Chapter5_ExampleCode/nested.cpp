// Program File 5.15

#include <iostream>
const int Cities = 5;
const int Years = 4;

using namespace std;
int main() {
  const char* cities[Cities]{"Wuhan", "BeiJing", "TianJin", "SiChuan",
                             "JiangXi"};

  int maxtemps[Years][Cities]{{96, 100, 87, 101, 122},
                              {12, 3, 4, 54, 6565},
                              {121, 4343, 124, 564, 123},
                              {123, 1231, 45, 65, 345}};

  cout << "Maximum temperatures for 2008 - 2011\n\n";
  for (int city = 0; city < Cities; ++city) {
    cout << cities[city] << ":\t";
    for (int year = 0; year < Years; ++year) {
      cout << maxtemps[year][city]<<"\t";
    }
    cout<<endl;
  }
}