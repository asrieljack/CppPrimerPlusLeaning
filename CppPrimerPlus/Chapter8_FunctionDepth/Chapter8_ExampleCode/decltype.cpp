#include <iostream>
using namespace std;

// 对于无法预知的类型
/*
template<class T1,class T2>
void ft(T1 x,T2 y){
    ?type? xpy=x+y
}
*/
// 可以使用decltype

template <class T1, class T2>
void func1(T1 x, T2 y) {
  decltype(x + y) xpy = x + y;
}

// 如果需要多次声明还可以与typedef结合
template <class T1, class T2>
void func2(T1 x, T2 y) {
  typedef decltype(x + y) xy_type;
  xy_type xpy = x + y;
  xy_type arr[10];
  xy_type& rxy = arr[2];
}

// 有些decltype无法解决的
/*
template <class T1, class T2>
?type? func(T1 x, T2 y) {
  return x+y;
}
*/
// 对于这种,可以使用auto funcName(typeName VarName)->typeName
// 例如
double func(int x, float y);
// 可以写为
auto func(int x, double h) -> double;

// 将上面的语法与decltype结合,就可以有
template <class T1, class T2>
auto funcAutoDecl(T1 x, T2 y) -> decltype(x + y) {
  return x + y;
}