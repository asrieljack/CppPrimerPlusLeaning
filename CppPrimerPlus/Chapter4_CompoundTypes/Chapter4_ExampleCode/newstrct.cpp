//Program File 4.21

#include<iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

struct goods{
    char name[20];
    float volume;
    double price;
};

int main(){
using namespace std;

inflatable *ps=new inflatable();    
cout<<"Enter name of inflatable item: ";
cin.get(ps->name,20);
cout<<"Enter Volume in cubic feet: ";
cin>>ps->volume;
cout<<"Enter price: $";
cin>>ps->price;
cout<<"name: "<<(*ps).name<<endl;
cout<<"volume: "<<ps->volume<<endl;
cout<<"price: "<<ps->price<<endl;
delete ps;




goods god;
cout<<"Enter name of god item: ";
cin.get(god.name,20);
cout<<"Enter Volume in cubic feet: ";
cin>>god.volume;
cout<<"Enter price: $";
cin>>god.price;
cout<<"name: "<<god.name<<endl;
cout<<"volume: "<<god.volume<<endl;
cout<<"price: "<<god.price<<endl;
return 0;
}
