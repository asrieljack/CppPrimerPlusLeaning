//Chapter 2, Programming Exercise #5
//Convert Celsius to Fahrenheit  
double CelsiusToFahrenheit(double celsius);
#include <iostream>
using namespace std;
int main()
{
    double celsius;
    cout<<"please enter celsius: "<<endl;
    cin>>celsius;
    cout<<"fahrenheit is "<<CelsiusToFahrenheit(celsius);
}
//Convert Celsius to Fahrenheit  
double CelsiusToFahrenheit(double celsius){
    double fahrenheit;
    fahrenheit=1.8*celsius+32.0;
    return fahrenheit; 
}