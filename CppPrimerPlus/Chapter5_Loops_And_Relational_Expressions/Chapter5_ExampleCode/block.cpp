// Program File 5.8
#include <iostream>
using namespace std;
int main() {
    int x=20;{
        cout<<"x: "<<x<<endl;
        int y=100;
        int x=3;
        cout<<"x: "<<x<<",y: "<<y<<endl;
    }
    cout<<"x: "<<x;
    //cout<<"y: "<<y----invalid,won't compile
}
