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
polar rect_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* pda);

int main() {
  rect rPlace;
  polar pPlace;

  cout << "Enter the x and y values: ";
  while (cin >> rPlace.x >> rPlace.y) {
    rect_to_polar(&rPlace, &pPlace);
    show_polar(&pPlace);
    cout << "Next two numbers(q to quit): ";
  }
}
// Convert rectangular to polar coordinates
polar rect_to_polar(const rect* pxy, polar* pda) {
  polar answer;
  pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
  pda->angle = atan2(pxy->y, pxy->x);

  return answer;
}
void show_polar(const polar* pda) {
  const double Rad_to_deg = 57.29577951;

  cout << "distance=" << pda->distance;
  cout << ", angle=" << pda->angle * Rad_to_deg;
  cout << " degrees\n";
}
