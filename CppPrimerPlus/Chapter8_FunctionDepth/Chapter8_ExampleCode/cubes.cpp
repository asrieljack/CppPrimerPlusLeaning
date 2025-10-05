#include<iostream>
using namespace std;


double Cube(double a);
double RefCube(double &ra);

int main(){
double x=3.0;
cout<<"cubeX: "<<Cube(x)<<endl;
cout<<"x: "<<x;
cout<<"Ref: "<<RefCube(x)<<endl;
cout<<"x: "<<x;
}
double Cube(double a){
    a*=a*a;
    return a;
}
double RefCube(double &ra){
    ra*=ra*ra;
    return ra;
}