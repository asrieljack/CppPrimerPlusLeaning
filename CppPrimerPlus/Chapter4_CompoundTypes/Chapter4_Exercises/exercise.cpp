// Program File 4.1
#include <array>
#include <cstring>
#include<vector>
#include<string>
#include <iostream>
using namespace std;

int main() {
/*question one----In order to prevent code conflicts,comments were made
char actor[30];
short betsie[100];
float chuck[13];
long double dipsea[64];
*/

//question two
array<char,30>actor;
array<short,100>betsie;
array<float,13>chuck;
array<long double,64>dipsea;

//question three
array<int,5>arr1{1,3,5,7,9};

//question four
int even=arr1[0]+arr1[3];

//question five
array<float,2>ideas{1,2};
cout<<ideas[1]<<endl;

//question six
array<char,13>char1{"cheeseburger"};

//question seven
string str1="Waldorf Salad";

//question eight
struct Fish{
  string type;
  int ounce;
  double inches;
};

//question ten
enum Response{No,Yes,Maybe};
Response res;

//question eleven;
double ted=3.0;
double *ptrTed=&ted;
cout<<*ptrTed<<endl;

//question twelve
float treacle[10]{1,2,3,4,5,6,7,8,9,10};
float *ptrTreacle=treacle;
cout<<*ptrTreacle<<endl;
ptrTreacle=(treacle+9);
cout<<*ptrTreacle;

//question thirteen
///new
int num1;
cout<<"Enter a int number: ";
cin>>num1;
int *arr=new int[num1];
delete [] arr;
///vector
vector<int>vec(num1);

//question fourteen
//cout<<(int*)"Home of the jolly bytes" 会输出首地址的整形整数值，这是因为
//编译器会把字符串看成const char[N]类型的。

//question fifteen;
Fish *prtFish=new Fish;
prtFish->inches=12;
prtFish->ounce=212;
prtFish->type="gold fish";
cout<<"fish's inches: "<<prtFish->inches<<",fish's ounce: "<<prtFish->ounce<<
",fish's type: "<<prtFish->type;

//question sixteen
//不知道

//
const int Size=10;
vector<string>vecStr(Size);
array<string,Size>arrStr;
}