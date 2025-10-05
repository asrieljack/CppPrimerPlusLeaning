#include <future>
#include <iostream>
#include <iterator>
using namespace std;

int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);

const int SIZE = 5;

int main() {
  double arr[SIZE];
  Fill_array(arr, SIZE);
}

int Fill_array(double arr[], int size) {
  int count = 0;
  double value;
  while (count < size) {
    cout << "Enter value " << count << " : ";
    if (cin >> value) {
      arr[count] = value;
      count++;
    }
  }
  return count;
}

void Show_array(const double arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i];
    if (i < size - 1) cout << ", ";
  }
  cout << endl;
}

void Reverse_array(double arr[], int size){
     double *start = arr;
    double *end = arr + size - 1;
    
    while (start < end) {
        double temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}