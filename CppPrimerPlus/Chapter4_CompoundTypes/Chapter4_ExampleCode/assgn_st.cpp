// Program File 4.12
#include <iostream>
#include <ostream>
struct inflatable {
  char name[20];
  float volume;
  double price;
};

struct perks {
  int key_number;
  char car[12];
} mr_smith,
    ms_jones;  // 在结尾处这样可以在创建结构体的时候顺a带创建这个类型的变量

struct pecks {
  int key_number;
  char car[12];
} mr_glitz{7, "Packard"};  // 创建变量的时候甚至可以直接赋值

struct {
  int x;
  int y;
} position;  // 也可以声明没有名称的结构类型，这样创建了一个名为position的结构变量，但是无法创建后续变量。
int main() {
  using namespace std;
  inflatable douquet = {
      "sunflowers",
      0.20,
      12.49,
  };
  inflatable choice;
  cout << "bouquet: " << douquet.name << " for $" << douquet.price << endl;
  choice = douquet;
  cout << "choice: " << choice.name << " for $ " << choice.price;
}