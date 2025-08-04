#include <string>
#include<iostream>
using namespace std;

struct CandyBar{
    string brand;
    double weight;
    int calorie;
};

int main(){
    CandyBar snack[3];
    snack[0]={"qwe",2.3,45};
    snack[1]={"asd",3.4,56};
    snack[2]={"zxc",6.7,67};
}