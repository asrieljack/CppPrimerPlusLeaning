#include <cctype>
#include <iostream>
using namespace std;

enum{red,orange,yellow,green,blue,violet,indigo};
int main() {
  int code;
  cin>>code;
  while(code>=red&&code<=indigo){
    switch (code) {
        case red:cout<<"Reddddddd\n";break;
        case orange:cout<<"Orangeeeeeeee\n";break;
        case yellow:cout<<"Yellowwwww\n";break;
        case green:cout<<"Greennnnnnnn\n";break;
        case blue:cout<<"Blueeeeee\n";break;
        case violet:cout<<"Violetttttt\n";break;
        case indigo:cout<<"Indigoooooo\n";break;
    }
    cout<<"Enter color code)0-6";
    cin>>code;
  }
  return 0;
}