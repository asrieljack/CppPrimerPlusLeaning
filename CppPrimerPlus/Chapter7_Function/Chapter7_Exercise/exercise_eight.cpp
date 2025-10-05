#include<iostream>

using namespace std;

double Average(double a,double b);


int main(){
    double num1, num2;
    while (true) {
        cin >> num1;
    
        if (num1 == 0) {
            break;
        }
        
        cin >> num2;
        
        if (num2 == 0) {
            break;
        }
        
        double average = Average(num1,num2);
        cout << "平均值: " << average << endl;
    }
}
double Average(double a,double b){
    return 2.0*a*b/(a+b);
}
