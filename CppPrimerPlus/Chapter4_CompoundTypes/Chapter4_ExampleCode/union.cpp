// 4.5 共用体
// 和struct不同的是，onion只能存储一种数据类型，而struct可以同时存储几种类型
// onion的用处是，当数据有许多格式但不会同时使用时候，可以节省空间
#include <iostream>
using namespace std;

union one4all {
  int int_val;
  long long_val;
  double double_val;
};

// 比如管理一个小商品目录，有一些物品的id为整数，一些为字符串，可以使用onion
struct widget {
  char brand[20];
  int type;
  union id {
    long id_num;
    char id_char[20];
  } id_val;
};

//匿名共用体没有名称，其成员将成为位于相同地址处的变量
struct widgetOnion {
  char brand[20];
  int type;
  union  {//匿名共用体
    long id_num;
    char id_char[20];
  } ;
};
int main() {
  one4all pail;
  pail.int_val = 15;
  cout << pail.int_val;
  pail.double_val = 1.34;  // 存储完doubleval以后，最初的intval已经丢失了
  cout << pail.double_val;

  //商品管理
  widget prize;
  if (prize.type == 1) {
    cin >> prize.id_val.id_num;
  } else {
    cin >> prize.id_val.id_char;
  };

  //匿名共用体
  //由于共用体匿名，所以idnum和idchar被视为shop的两个成员，他们的地址相同，所以不需要id_val
  
  widgetOnion shop;
  if(shop.type==1){
    cin>>shop.id_num;
  }
  else{
    cin>>shop.id_char;
  }
}