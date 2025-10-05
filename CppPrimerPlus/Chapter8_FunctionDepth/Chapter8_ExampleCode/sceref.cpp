#include <iostream>
#include <ostream>
using namespace std;

int main(){
    int rats=101;
    int &rodents=rats;
    cout<<rats<<endl;
    cout<<rodents<<"---"<<endl;
    cout<<&rats<<endl;
    cout<<&rodents<<"----"<<endl;

    int bunnies=50;
    rodents=bunnies;
    cout<<bunnies<<endl;
    cout<<rats<<endl;
    cout<<rodents<<endl;
    cout<<&bunnies<<endl;
    cout<<&rats<<endl;
    cout<<&rodents<<endl;
}