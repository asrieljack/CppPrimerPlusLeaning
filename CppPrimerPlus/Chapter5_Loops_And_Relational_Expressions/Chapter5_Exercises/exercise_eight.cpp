#include <immintrin.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int Size;
  cout << "Enter Size: ";
  cin >> Size;
  cout << endl;

  string arr[Size][Size];
  for (int i = 0; i < Size; i++) {
    for (int j = 0; j < Size-i; j++) {
        arr[i][j]=".";
    }
    for(int q=Size-1;q>Size-i;q--){
        arr[i][q]="*";
    }
  }
   
   for (int i = 0; i < Size; i++) {
    for (int j = 0; j < Size; j++) {
       cout<< arr[i][j];
    }
    cout<<endl;
  }
  //如果不存储,直接输出
      for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << (j < Size - 1 - i ? "." : "*");
        }
        cout << endl;
    }
}