#include <iostream>
using namespace std;
template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T* arr[], int n);

struct debts {
  char name[50];
  double amount;
};

int main() {
  int things[6] = {12, 3, 6, 756, 82, 76};
  struct debts mr_E[3] = {{"c", 1233.2}, {"d", 12.33}, {"q", 3214.435}};
  double* pd[3];
  for (int i = 0; i < 3; i++) {
    pd[i] = &mr_E[i].amount;
  }
  ShowArray(things, 6);
  ShowArray(pd, 3);
}

template <typename T>
void ShowArray(T arr[], int n) {
  cout << "TA:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

template <typename T>
void ShowArray(T* arr[], int n) {
  cout << "TB:\n";
  for (int i = 0; i < n; i++) {
    cout << *arr[i] << ' ';
  }
  cout << endl;
}