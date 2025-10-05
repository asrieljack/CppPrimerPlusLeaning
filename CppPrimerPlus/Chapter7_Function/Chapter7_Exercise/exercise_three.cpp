#include<iostream>

using namespace std;
const int SIZE=4;
double FindMax(const double ar[],int size);

int main(){
double arr[SIZE]={3.4,4.5,73.5,33.3};
double maxVal=FindMax(arr,SIZE);
cout<<maxVal;
}
double FindMax(const double ar[],int size){
    double maxVal=ar[0];
    for(int i=1;i<size;i++){
        if(ar[i]>maxVal){
            maxVal=ar[i];
        }
    }
    return maxVal;

}