#include<iostream>

int replace(char*str,char c1,char c2);

int main(){
    using namespace std;
    char text[] = "Hello World";
    cout << "原始字符串: " << text << endl;
    
    int count = replace(text, 'l', 'x');
    cout << "替换后字符串: " << text << endl;
    cout << "替换次数: " << count << endl;
    
    return 0;
}


int replace(char*str,char c1,char c2){
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==c1){
            str[i]=c2;
            ++count;
        }
    }
return count;
}