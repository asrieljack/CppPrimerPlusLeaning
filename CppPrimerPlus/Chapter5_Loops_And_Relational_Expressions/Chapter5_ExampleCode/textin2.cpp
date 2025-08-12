// Program File 5.19

#include <cstdio>
#include <iostream>

using namespace std;
int main() {
int ch;
int count=0;
while((ch=cin.get())!=EOF){
    cout.put(char(ch));
    ++count;
}
cout<<endl<<count;
}