#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
  char fullName[SLEN];
  char hobby[SLEN];
  int oopLevel;
};

int GetInfo(student pa[], int n);
void Display1(student st);
void Display2(const student *ps);
void Display3(const student pa[], int n);

int main() {
  int class_Size;
  cin >> class_Size;
  while (cin.get() != '\n') {
    continue;
  }
  student *ptr_stu = new student[class_Size];
  int entered = GetInfo(ptr_stu, class_Size);
   for(int i=0;i<entered;i++){
       Display1(ptr_stu[i]);
       Display2(&ptr_stu[i]);
   }
   Display3(ptr_stu,entered);
   delete [] ptr_stu;
   return 0;
}

int GetInfo(student pa[], int n) {
  int count = 0;
  while (count < n) {
    cout << "Enter student #" << count + 1 << " information:" << endl;

    cin.getline(pa[count].fullName, SLEN);
    if (pa[count].fullName[0] == '\0') {
      break;
    }

    cout << "Hobby: ";
    cin.getline(pa[count].hobby, SLEN);

    cout << "OOP level: ";
    while (!(cin >> pa[count].oopLevel)) {
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Please enter a valid integer for OOP level: ";
    }
    cin.ignore(1000, '\n');
    count++;
    cout << endl;
  }
  return count;
}
void Display1(student st) {
    cout<<"FullName: "<<st.fullName<<", "<<"Hobby: "<<st.hobby<<", oopLevel: "<<st.oopLevel<<endl;
}
void Display2(const student *ps) {
    cout<<"FullName: "<<ps->fullName<<", "<<"Hobby: "<<ps->hobby<<", oopLevel: "<<ps->oopLevel<<endl;
}
void Display3(const student pa[], int n) {
    for(int i=0;i<n;i++){
        cout<<"FullName: "<<pa[i].fullName<<", "<<"Hobby: "<<pa[i].hobby<<", oopLevel: "<<pa[i].oopLevel<<endl;
    }
}