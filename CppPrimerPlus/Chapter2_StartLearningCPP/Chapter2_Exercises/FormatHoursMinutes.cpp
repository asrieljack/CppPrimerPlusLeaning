// Chapter 2, Programming Exercise #7
// Format Hours Minutes
#include <iterator>
void FormatHoursMinutes(int hours, int minutes);
#include <iostream>
using namespace std;
int main() {
     int hours;
     int minutes;
     cout<<"Enter the number of hours: ";
     cin>>hours;
     cout<<"Enter the number of minute: ";
     cin>>minutes;
     FormatHoursMinutes(hours,minutes);
}
void FormatHoursMinutes(int hours, int minutes){
    cout<<"Time: "<<hours<<":"<<minutes;
}