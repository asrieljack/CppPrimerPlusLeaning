#include <array>
#include <iostream>
#include <string>
using namespace std;

const int years = 3;
const int month = 12;
int main() {
  int i,j ;

  array<string, 12> months{"January",   "February", "March",    "April",
                           "May",       "June",     "July",     "August",
                           "September", "October",  "November", "December"};
  int monthsSales[years][month];
  for(i=0;i<years;++i){
    for(j=0;j<month;++j){
      cout<<months[j];
      cin>>monthsSales[i][j];
      cout<<endl;
    }
  }
  for(i=0;i<years;++i){
    for(j=0;j<month;++j){
      cout<<monthsSales[i][j]<<endl;;
    }
  }
  int temp=0;
  for(i=0;i<years;++i){
    for(j=0;j<month;++j){
      temp+=monthsSales[i][j];
    }
  }
  cout<<"---------\n"<<temp;
}