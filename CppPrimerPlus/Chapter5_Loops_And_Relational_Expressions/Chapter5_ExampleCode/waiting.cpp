// Program File 5.1
#include <iostream>
#include <ctime>
using namespace std;
int main() {
cout<<"Enter a delay time,in seconds: ";
float secs;
cin>>secs;
clock_t delayTime=secs*CLOCKS_PER_SEC;
cout<<"starting\a\n";
clock_t start=clock();
while(clock()-start<delayTime)
    ;
cout<<"done \a\n";
}