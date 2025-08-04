// Program File 4.15
#include <future>
#include <iostream>
int main() {
  using namespace std;
  int updates = 6;
  int *p_updates;
  int *p1,
      p2;  // 在这里只有p1是指针，p2是int变量，对于每个指针变量名，都需要使用一个*
  p_updates = &updates;

  cout << "updates value: " << updates << ", *p_updates: " << *p_updates
       << endl;

  cout << "Address: &updates= " << &updates << ", p_updates = " << p_updates
       << endl;

  *p_updates = *p_updates + 1;

  cout << "Now updates = " << updates << endl;
}