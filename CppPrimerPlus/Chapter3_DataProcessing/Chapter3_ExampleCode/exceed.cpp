//Program File 3.2

#include <climits>
#include <iostream>
#define ZERO 0
using namespace std;
int main(){
   short sam=SHRT_MAX;
   unsigned short sue=sam;
   cout<<"sam has: "<<sam<<"sue has: "<<sue<<endl;
   sam=sam+1;
   sue=sue+1;
   cout<<"now,sam has: "<<sam<<"and sue has: "<<sue<<endl;
   sam=ZERO;
   sue=ZERO;
   cout<<"now,sam has: "<<sam<<"and sue has: "<<sue<<endl;
   sam=sam-1;
   sue=sue-1;
   cout<<"now,sam has: "<<sam<<"and sue has: "<<sue<<endl;
   return 0;
}