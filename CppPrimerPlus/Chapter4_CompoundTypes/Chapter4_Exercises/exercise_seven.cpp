#include<string>
#include<iostream>
using namespace std;

struct Pizza{
    string name;
    double diameter;
    double weight;
};

int main(){
Pizza pizza;
cin>>pizza.name;
cin>>pizza.diameter;
cin>>pizza.weight;
}