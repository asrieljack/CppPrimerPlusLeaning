//Program 4.19
#include <iostream>
int main(){
    using namespace std;
    double wages[3]{10000.0,20000.0,30000.0};
    short stacks[3]{3,2,1};

    double *pw=wages;
    short  *ps=&stacks[0];
  double *pe=wages;
    cout<<"pw= "<<pw<<", *pw= "<<*pw<<endl;
    pw=pw+1;
    cout<<"pw add 1= "<<pw<<",*pw= "<<*pw<<"\n\n";
    cout<<"ps= "<<ps<<",*ps= "<<*ps<<endl;
    ps=ps+1;
    cout<<"ps add 1= "<<ps<<",*ps= "<<*ps<<"\n\n";
    cout<<"stacks[0]= "<<stacks[0]<<",stacks[1]= "<<stacks[1]<<endl;
    cout<<"*(stacks)+1= "<<*(stacks)+1<<endl;

    cout<<sizeof(wages)<<"=size of wages array\n";
    cout<<sizeof(pw)<<"= size of pw pointer\n";

    cout<<wages<<"---"<<&wages;
    return 0;
}