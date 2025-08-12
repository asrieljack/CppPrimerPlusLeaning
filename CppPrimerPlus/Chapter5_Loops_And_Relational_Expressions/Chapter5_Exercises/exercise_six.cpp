#include <iostream>
#include <vector>
using namespace std;

struct car {
  string name;
  int year;
};
int main() {
  cout << "How many cars: ";
  int mount;
  cin >> mount;
  cout << endl;
  vector<car> vec1(mount);
  for (int i = 0; i < mount ; i++) {
    cout << "Enter name: ";
    cin >> vec1[i].name;
    cout << endl << "Enter year: ";
    cin >> vec1[i].year;
    cout << endl;
  }
  for(int i=0;i<mount;i++){
    cout<<"car name: "<<vec1[i].name<<endl;
    cout<<"car year: "<<vec1[i].year<<endl;
  }
}