#include <string>
#include<iostream>
using namespace std;

struct CandyBar{
    string brand;
    double weight;
    int calorie;
};

int main(){
    CandyBar *s=new CandyBar[3];
    s[0]={};
    s[1]={};
    s[2]={};
}