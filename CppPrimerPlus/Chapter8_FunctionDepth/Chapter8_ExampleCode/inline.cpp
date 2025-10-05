//inline 内联函数
//内联函数可以省去调用函数跳转函数代码块执行并返回main函数的过程
//使用inline将直接拷贝函数的代码副本,省去跳转的时间,但这样会增大内存开销
#include <iostream>
using namespace std;

inline double square(double x){return x*x;}

int main(){

}