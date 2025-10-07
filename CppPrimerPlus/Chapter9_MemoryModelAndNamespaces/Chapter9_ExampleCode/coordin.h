#ifndef COORDIN_H_
#define COORDIN_H_

struct polar {
  double distance;
  double angle;
};
struct rect {
  double x;
  double y;
};

polar RectToPolar(rect xy_pos);
void ShowPolar(polar da_pos);
#endif
