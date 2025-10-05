#include<iostream>
using namespace std;

void SwapR(int &a,int &b);
void SwapP(int*p,int *q);
void SwapV(int a, int b);

int main(){
    int wallet1=300;
    int wallet2=350;
    cout<<wallet1<<endl;
    cout<<wallet2<<"----"<<endl;

    SwapR(wallet1,wallet2);
    cout<<wallet1<<endl;
    cout<<wallet2<<"----"<<endl;

    SwapP(&wallet1,&wallet2);
    cout<<wallet1<<endl;
    cout<<wallet2<<"----"<<endl;

    SwapV(wallet1,wallet2);
    cout<<wallet1<<endl;
    cout<<wallet2<<"----"<<endl;
}

void SwapR(int &a,int &b){
    int temp;
    
    temp=a;
    a=b;
    b=temp;
}
void SwapP(int*p,int *q){
    int temp;

    temp=*p;
    *p=*q;
    *q=temp;
}
void SwapV(int a, int b){
    int temp;

    temp=a;
    a=b;
    b=temp;
}