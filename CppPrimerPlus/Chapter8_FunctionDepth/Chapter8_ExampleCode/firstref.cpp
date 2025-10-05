#include<iostream>
#include <ostream>

int main(){
    using namespace std;
    int rats=101;
    int&rodents=rats;
    cout<<"rat"<<rats<<endl;
    cout<<"rod"<<rodents<<endl;
    rodents++;
    cout<<"Rat: "<<rats<<endl;
    cout<<"Rod:"<<rodents;
}