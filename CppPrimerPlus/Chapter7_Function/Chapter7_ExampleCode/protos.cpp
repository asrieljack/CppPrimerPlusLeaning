#include<iostream>
#include <ostream>
using namespace std;

void cheers(int);
double cube(double x);

int main(){
    using namespace std;
    cheers(5);
    cout<<"Give me a number: ";
    double side;
    cin>>side;
    double volume=cube(side);
    cout<<endl<<"A "<<"-foot cube has a volume of ";
    cout<<volume<<" cubic feet.\n";
    cheers(cube(side));
    return 0;
}
void cheers(int n){
    using namespace std;
    for (int i=0 ;i<n;i++) {
        cout<<"Cheers! ";
    }
    cout<<endl;
}

double cube(double x){
    return x*x*x;
}