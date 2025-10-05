#include<iostream>

using namespace std;

void arr_ptr(int*begin,int *end,int value);

int main(){

}

void arr_ptr(int*begin,int *end,int value){
     for (int* ptr = begin; ptr != end; ptr++) {
        *ptr = value;
    }
}