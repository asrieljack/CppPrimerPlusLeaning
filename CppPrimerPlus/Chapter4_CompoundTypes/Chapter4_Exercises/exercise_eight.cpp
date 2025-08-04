#include<string>
#include<iostream>
using namespace std;

struct Pizza{
    string name;
    double diameter;
    double weight;
};

int main(){
Pizza*p=new Pizza;
cin>>p->diameter;
cin>>p->name;
cin>>p->weight;
}