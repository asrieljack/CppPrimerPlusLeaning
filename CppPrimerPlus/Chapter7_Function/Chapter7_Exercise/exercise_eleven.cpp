#include <iostream>
using namespace std;

unsigned long long factorial(int n);

int main() {
  int n;
  cin >> n;
  cout<<factorial(n);
}
unsigned long long factorial(int n) {
  if(n==1||n==0){
    return 1;
  }
  return n*factorial(n-1);
}