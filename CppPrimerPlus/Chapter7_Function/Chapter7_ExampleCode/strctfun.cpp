#include <cmath>
#include <iostream>

using namespace std;

struct polar {
  double distance;  // distance from origin
  double angle;     // distance from origin
};

struct rect {
  double x;  // horizontal distance from origin
  double y;  // vertical distance from origin
};

// prototypes
polar rect_to_polar(rect xyPos);
void show_polar(polar daPos);

int main() {
  rect rPlace;
  polar pPlace;

  cout << "Enter the x and y values: ";
  while (cin >> rPlace.x >> rPlace.y) {
    pPlace = rect_to_polar(rPlace);
    show_polar(pPlace);
    cout << "Next two numbers(q to quit): ";
  }
}
// Convert rectangular to polar coordinates
polar rect_to_polar(rect xyPos) {
  polar answer;
  answer.distance = sqrt(xyPos.x * xyPos.x + xyPos.y * xyPos.y);
  answer.angle = atan2(xyPos.y, xyPos.x);
  return answer;
}
void show_polar(polar daPos){
    const double Rad_to_deg=57.29577951;

    cout<<"distance="<<daPos.distance;
    cout<<", angle="<<daPos.angle*Rad_to_deg;
    cout<<" degrees\n";
}
