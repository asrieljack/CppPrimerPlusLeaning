//Program File 2.2
#include <iostream>//头文件
int main()
{
    using namespace std;
    //using编译指令可以替换掉std::这样的前缀，使得namespace后边的命名空间中的所有名称可用
    int carrots;//（
    carrots=25;
    cout << "i have";
    cout<<carrots;
    cout<<"carrots";
    cout<<endl;
    carrots=carrots-1;
    cout<<"now i have"<<carrots<<"carrots"<<endl;
    return 0;
}