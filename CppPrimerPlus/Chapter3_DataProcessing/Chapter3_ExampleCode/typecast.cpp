// Program File 3.14
#include <iostream>
#include <vector>
int main() {
  using namespace std;
  int auks, bats, coots;

  auks = 19.98 + 11.99;

  bats = (int)19.99 + (int)11.99;   // c
  coots = int(19.99) + int(11.99);  // c++
  cout<<"auks= "<<auks<<endl;
  cout<<"bats= "<<bats<<endl;
  cout<<"coots= "<<coots<<endl;

  char ch='Z';
  cout<<"The code for "<<ch<<" is ";
  cout<<int(ch)<<endl;
  cout<<"-----"<<endl;
  cout<<static_cast<int>(ch);
  
}