#include<iostream>

using namespace std;

long double probability(unsigned numbers,unsigned picks);

int main(){
    double total,choices;
    cout<<"Enter total num of choices on the game card and\n"
    "the num if picks allowed:\n";
    while((cin>>total>>choices)&&choices<=total){
        cout<<"You have one chance in ";
        cout<<probability(total,choices);
        cout<<" of winning.\n";
        cout<<" Next two num (q quit): ";
    }
    cout<<"bye\n";

}
long double probability(unsigned numbers,unsigned picks){
    long double result=1.0;
    long double n;
    unsigned p;
    for(n=numbers,p=picks;p>0;n--,p--){
        result=result*n/p;
    }
    return  result ;
}