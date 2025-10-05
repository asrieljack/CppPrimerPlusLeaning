#include<iostream>

using namespace std;

int InputGrades(double arr[],int size);
void DisplayGrades(const double arr[],int size);
double AverageGrades(const double arr[],int size);

int main(){
    const int MAX_SIZE = 10;
    double grades[MAX_SIZE];
    
    // 输入成绩
    int actualSize = InputGrades(grades, MAX_SIZE);
    
    // 显示成绩
    DisplayGrades(grades, actualSize);
    
    // 计算并显示平均成绩
    if (actualSize > 0) {
        double average = AverageGrades(grades, actualSize);
        cout << "平均成绩: " << average << endl;
    } else {
        cout << "没有输入成绩" << endl;
    }
    
    return 0;
}

int InputGrades(double arr[],int size){
    int count=0;
    for(int i=0;i<size;++i){
        cin>>arr[i];
        ++count;
    }
    return count;
}
void DisplayGrades(const double arr[],int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}
double AverageGrades(const double arr[],int size){
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum / size;
}
