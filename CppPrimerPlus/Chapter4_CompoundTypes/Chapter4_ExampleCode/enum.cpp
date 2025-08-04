//Enum
#include<iostream>
using namespace std;

enum specturm{red,orange,yellow,green,blue,violet,indigo,ultraviolet};
enum bits{one=1,two=2,four=4,eight=8};//初始化
enum bigstep{first,second=100,third};//first默认0，后续没有被初始化的值比初始化的值大1，third为101
int main(){
    specturm band;//band a variable of type specturm
    band = blue;
    
    bits myflag;
    myflag=bits(6);//这样做是合理的，6在bits的范围内
    //在枚举中，枚举量的最大最小值是当前范围最大最小值的二次幂-1
    //比如，在bigstep里，最大值为101，和这个最大值最接近的二次幂的最小值为128，因此上限为127
    //最小值如果不小于0，下限为0；否则和最大值的查找公式一样
    //比如，最小值为6，那么和他的最小值接近的二次幂的最大值为-8。因此下限为-7
}
