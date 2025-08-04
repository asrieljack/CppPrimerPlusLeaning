//Program File 4.11
#include<iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
    
};

int main(){
    using namespace std;
    inflatable guest=
    {
        "Tom Cat",
        1.88,
        29.99
    };
    inflatable pal{"Audacious",3.12, 32.99,};

    cout<<"guestName: "<<guest.name<<" and palName: "<<pal.name<<endl;
    cout<<"guestPrice and palPrice: "<<guest.price<<","<<pal.price;
}