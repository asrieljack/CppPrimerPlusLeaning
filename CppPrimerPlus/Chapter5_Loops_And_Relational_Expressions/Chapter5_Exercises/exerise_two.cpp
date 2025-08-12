
#include<iostream>
using namespace std;
int main(){
    int ch,temp=0;
    while(cin>>ch){
        temp+=ch;
        cout<<temp<<endl;
        ch=cin.get();
    }

}