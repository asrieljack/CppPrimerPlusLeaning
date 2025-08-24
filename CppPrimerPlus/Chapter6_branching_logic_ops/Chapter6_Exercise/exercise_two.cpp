#include <cctype>
#include <iostream>
using namespace std;
int main() {
  char ch,temp;



  while (cin.get(ch)&&ch != '@') {
     // 跳过数字
        if (isdigit(ch)) {
            continue;
        }
        
        // 大小写转换
        if (isupper(ch)) {
            ch = tolower(ch);  // 大写转小写
        } else if (islower(ch)) {
            ch = toupper(ch);  // 小写转大写
        }
        // 其他字符（标点符号等）保持不变
        
        // 回显转换后的字符
        cout << ch;
  }
  
}