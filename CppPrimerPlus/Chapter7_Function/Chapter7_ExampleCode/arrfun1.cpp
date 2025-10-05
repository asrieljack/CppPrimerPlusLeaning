#include<iostream>
#include <ostream>

using namespace std;

const int ArrSize=8;
int sum_arr(int arr[],int n);

int main(){
    int cookies[ArrSize]={1,2,4,8,16,32,64,128};

    int sum=sum_arr(cookies,ArrSize);
    cout<<sum<<endl;
    return 0;
}

int sum_arr(int arr[],int n){
    int total=0;
    for(int i=0;i<n;i++){
        total = total+arr[i];
    }
    return total;
}
