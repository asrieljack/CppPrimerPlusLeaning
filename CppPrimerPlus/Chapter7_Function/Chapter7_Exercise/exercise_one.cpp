#include<iostream>

using namespace std;
//int sum(int (*ar2)[4],int size)等价于下边的写法
//无论使用哪一种,编译器最终都会将这句话解释为int (*ar2)[4],但现在实际使用的写法更易懂
int sum(int ar2[][4],int size);


int  main() {
    int data[3][4]={{1,2,3,4},{9,8,7,6},{2,4,6,8}};
    int total=sum(data,3);
    cout<<total;
    return 0;
}

int sum(int ar2[][4],int size){
    int total=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<4;j++){
            total+=ar2[i][j];
        }
    }
    return total;
}