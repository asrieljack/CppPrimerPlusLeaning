//Program File 2.2
#include <iostream>//头文件
int main()
{
    using namespace std;
    //using编译指令可以替换掉std::这样的前缀，使得namespace后边的命名空间中的所有名称可用
    int carrots;//声明一个数据类型为int的整数类型的变量,每当定义一个新变量编译器都会为其分配内存空间
    carrots=25;//赋值
    cout << "i have";
    cout<<carrots;
    cout<<"carrots";
    cout<<endl;
    carrots=carrots-1;
    cout<<"now i have"<<carrots<<"carrots"<<endl;
    return 0;
}