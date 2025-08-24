#include <iostream>
using namespace std;
double calculateTax(double income) {
    if (income <= 5000) return 0;
    
    double tax = 0;
    double remaining = income;
    
   if(remaining>35000){
        tax+=(remaining-35000)*0.20;
        remaining=35000;
   }

    if (remaining > 15000) {
        tax += (remaining - 15000) * 0.15;
        remaining = 15000;
    }
    

    if (remaining > 5000) {
        tax += (remaining - 5000) * 0.10;
    }
    
    return tax;
}

int main() {
    double tvarp;
    while(cin>>tvarp){
        if(tvarp<0){
            return 0;
        }
         double tax = calculateTax(tvarp);
        cout << "收入: " << tvarp << " 元，所得税: " << tax << " 元" << endl;
        cout << "请输入下一个收入（输入负数或非数字结束）：";
        if (!cin) {
        cout << "输入非数字，程序结束。" << endl;
        cin.clear(); // 清除错误状态
        cin.ignore(10000, '\n'); // 忽略错误输入
    }
    }

}


