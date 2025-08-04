#include <cstring>
#include <iostream>
using namespace std;
int main(){
   char surName[20],name[20],fullName[20];
   cout<<"Enter your first  name: ";
   cin>>name;
   cout<<endl;
   cout<<"Enter your last name: ";
   cin>>surName;
   cout<<endl;
   strncpy(fullName,name,sizeof(fullName) - 1);
   strncat(fullName,",",sizeof(fullName) - strlen(fullName) - 1);
   strncat(fullName,surName,sizeof(fullName) - strlen(fullName) - 1);
   cout<<fullName;
}