//Program 4.14
//指针
//计算机程序在存储数据时候必须追踪的三种基本属性
//*信息存在哪里 *存储的值为多少 *存储的信息是什么类型
//对变量使用地址运算符&可以获取变量地址
#include<iostream>
int main(){
    using namespace std;
    int donuts=6;
    double cups=4.5;

    cout<<"donuts value = "<<donuts;
    cout<<" and donuts address = "<< &donuts<<endl;

    cout<<"cups value = "<<cups;
    cout<<" and cups address = "<<&cups<<endl;
}