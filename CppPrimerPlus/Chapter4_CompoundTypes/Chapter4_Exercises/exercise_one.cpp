#include <iostream>
using namespace std;
int main(){
    string s1,s2;
    char c1;
    int age;
    cout<<"What is your first name? ";
    cin>>s1;
    cout<<"What is your last name? ";
    cin>>s2;
    cout<<"What letter grade do you deserve? ";
    cin>>c1;
    cout<<"What is your age? ";
    cin>>age;
    cout<<"Name: "<<s2<<", "<<s1<<endl;
    cout<<"Grade: "<<char(c1+1)<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<c1+1<<endl;
}