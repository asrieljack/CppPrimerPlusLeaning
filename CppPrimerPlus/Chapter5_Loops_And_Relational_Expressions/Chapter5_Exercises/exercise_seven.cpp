#include<iostream>
using namespace std;
int main(){
    string word;
    int count=0;
    while(true){
     cin>>word;
        if(word=="done"){
            break;
        }
        count++;
    }
    cout<<count;  
    //使用cin输入的时候,c++会将前后用逗号连接的词视为一个词,若想将被逗号分隔的单词单独统计则需要
    //将逗号视为空格
    /*  while (std::getline(std::cin, word)) {
        if (word == "done") break;

        // 替换所有标点符号为空格
        for (char &c : word) {
            if (c == ',' || c == '.' || c == '!' || c == '?') c = ' ';
        }

        // 重新用 stringstream 统计单词
        std::stringstream ss(word);
        string s;
        while (ss >> word) {
            count++;
        }
    }*/                       
}