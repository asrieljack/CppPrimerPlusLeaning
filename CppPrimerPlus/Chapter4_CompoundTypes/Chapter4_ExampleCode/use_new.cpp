// Program File  4.17
#include <iostream>
int main() {
  using namespace std;
  int nights = 1001;
  int *pt = new int;
  *pt = 1001;
  cout << "nights value = " << nights << ": location " << &nights << endl;
  cout << "int " << "value = " << *pt << ": location = " << pt << endl;
  double *dp = new double;
  *dp = 10000001.0;

  cout << "double value = " << *dp << ": location = " << dp << endl;
  cout << "location of pointer pd: " << &dp << endl;

  /*栈（Stack）:
+---------------------+
| 指针变量 dp          | 地址: 0x5ffe68
| 存储的值: 0x64cb20   |
+---------------------+
堆（Heap）:
+---------------------+
| 动态分配的 double    | 地址: 0x64cb20
| 存储的值: 1e+07      |
+---------------------+
-----**也就是说，new
double会在Heap上请求一块足够存放double的内存，并标记为己用（这里返回了0x64cb20）
也就是1e+07是存储在堆上的。*pd分配了堆内存，而pd本身分配到了栈，存储了*pd分配到的堆内存的地址
pd自己也有一块属于自己的栈内存**-----
*/
  cout << "size of pt = " << sizeof(pt) << ":size of *pt= " << sizeof(*pt)
       << endl;
  cout << "size of pd = " << sizeof(dp) << ":size of *pd= " << sizeof(*dp)
       << endl;

  // 也可以创建动态数组
  int *psome = new int[10];
  /*
      内存状态:
          栈                          堆
          +-----------+             +-----------+
          | psome     | 0x7ffee     | 0x1000    | [int 0]
          | [0x1000]  | ----------> | 0x1004    | [int 1]
          +-----------+             | ...       |
                                    | 0x1028    | [int 9]
                                  +-----------+
  */
  delete[]psome;
}