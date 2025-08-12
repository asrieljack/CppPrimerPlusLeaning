// Program File 5.1
#include <iostream>
using namespace std;
int main() {
  int a = 20;
  int b = 20;
  cout << "a= " << a << " ;b= " << b << endl;
  cout << "a++= " << a++ << " ;++b= " << ++b << endl;
  cout << "a= " << a << " ;b= " << b << endl;
  cout<<"--------------------"<<endl;
  int arr[5]{91,3,5,7,9};
  int*ptr1=arr;
  cout<<"ptr1: "<<ptr1<<endl;
  int num1=*++ptr1;
  cout<<"*++ptr1: "<<num1<<",and now ptr1: "<<ptr1<<endl;
 
   int*ptr2=arr;
  cout<<"ptr2: "<<ptr2<<endl;
  int num2=++*ptr2;
  cout<<"++*ptr2: "<<num2<<",and now ptr2: "<<ptr2<<endl;
  
}