#include <iostream>
using namespace std;

double* Fill_array(double arr[], double* begin, double* end);
void Show_array(double arr[], double* end);
void Reverse_array(double arr[], double* end);

const int SIZE = 5;

int main() {
    double arr[SIZE];
    double* end = Fill_array(arr, arr, arr + SIZE);
    cout << "Original array: ";
    Show_array(arr, end);
    
    Reverse_array(arr, end);
    cout << "Reversed array: ";
    Show_array(arr, end);
}

double* Fill_array(double arr[], double* begin, double* end) {
  double* current = begin;
  double value;
  while (current < end) {
    if (cin >> value) {
      *current = value;
      current++;
    }
  }
  return current;
}

void Show_array(double arr[], double* end) {
  double* i;
  for (i = arr; i < end; i++) {
    cout << *i;
    if (i < end - 1) cout << ", ";
  }
  cout << endl;
}

void Reverse_array(double arr[], double* end) {
    double *start=arr;
    double *finish=end-1;
    while(start<finish){
        double temp=*start;
        *start=*finish;
        *finish=temp;
        start++;
        finish--;
    }
}