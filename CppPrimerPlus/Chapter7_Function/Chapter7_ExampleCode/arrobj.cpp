#include <array>
#include <iostream>


//constant data
const int Seasons=4;
const std::array<std::string,Seasons>Snames={"Spring","Summer","Fail","Winter"};

//Function to modify array object
void fill(std::array<double,Seasons>*pa);
//Function that uses array object without modifying it
void show(std::array<double,Seasons>da);

int main() {
    std::array<double,Seasons>expenses;
    fill(&expenses);
    show(expenses);
}

void fill(std::array<double,Seasons>*pa){
    using namespace std;
    for(int i=0;i<Seasons;i++){
        cout<<"Enter "<<Snames[i]<<" expenses: ";
        cin>>(*pa)[i];
    }
}

void show(std::array<double,Seasons>da){
    using namespace std;
    double total=0.0;
    cout<<"\nEXPENSES\n";
    for(int i=0;i<Seasons;i++){
        cout<<Snames[i]<<": $"<<da[i]<<endl;
        total+=da[i];
    }
    cout<<"Total Expenses: $"<<total<<endl;
}
