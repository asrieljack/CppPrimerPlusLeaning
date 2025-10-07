#include <cmath>
#include <iostream>

#include "coordin.h"

using namespace std;
int main() {
  rect rPlace;
  polar pPlace;
  while (cin >> rPlace.x >> rPlace.y) {
    pPlace = RectToPolar(rPlace);
    ShowPolar(pPlace);
  }
}