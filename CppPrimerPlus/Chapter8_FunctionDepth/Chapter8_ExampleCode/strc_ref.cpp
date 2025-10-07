#include <iostream>
using namespace std;

struct free_throws {
  string name;
  int made;
  int attempts;
  float percent;
};
void Display(const free_throws& ft);
void SetPc(free_throws(&ft));
free_throws& accumulate(free_throws& target, const free_throws& source);

int main() {
  free_throws one = {"IA", 13, 15};
  free_throws two = {"ICch", 12, 11};
  free_throws three = {"IVNh", 13, 122};
  free_throws four = {"IAAh", 14, 155};
  free_throws five = {"IfSSsa Branch", 1, 133};
  free_throws team = {"IDDa Branch", 0, 0};

  free_throws dup;
  SetPc(one);
  Display(one);
  accumulate(team, one);
  Display(team);

  Display(accumulate(team, two));
  accumulate(accumulate(team, three), four);
  Display(team);

  dup = accumulate(team, five);
  cout << "Displaying team\n";
  Display(team);
  cout << "Displaying dup after assignment: \n";
  Display(dup);
  SetPc(four);

  accumulate(dup, five);
  cout << "Displaying dup after ill--advised assignment: \n";
  Display(dup);
  return 0;
}
void Display(const free_throws& ft) {
  cout << "Name: " << ft.name << endl;
  cout << "Made: " << ft.made << endl;
  cout << "Attempt: " << ft.attempts << endl;
  cout << "Percent---: " << ft.percent << endl;
}
void SetPc(free_throws(&ft)) {
  if (ft.attempts != 0) {
    ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
  } else {
    ft.percent = 0;
  }
}
free_throws& accumulate(free_throws& target, const free_throws& source) {
  target.attempts += source.made;
  target.made += source.made;
  SetPc(target);
  return target;
}