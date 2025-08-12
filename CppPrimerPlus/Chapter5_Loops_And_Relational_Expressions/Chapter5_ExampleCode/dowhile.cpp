//Program File 5.15

#include <iostream>

using namespace std;
int main() {

    int n;
    cout<<"Enter a num\n";
    do{
        cin>>n;
    }while(n!=7);
    cout<<"seven right";
    //same function
    // int i=0;
    // for(;;)
    // {
    //     if(i<30)break;
    //         cout<<i<<endl;
    // }

    double prices[5]={2.3,4.3,5.4,6.5,2.3};
    for(double x:prices){
        cout<<x<<endl;
    }
    for(double &x:prices){
        x=x*0.80;
    }
     for(double x:prices){
        cout<<x<<endl;
    }
}