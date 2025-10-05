#include <iostream>
#include <vector>
using namespace std;
namespace myMath {
vector<double> calculate(double x, double y, double (*prFun[])(double, double),
                         int size);
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
}  // namespace myMath

typedef double (*ptrFunc)(double, double);
int main() {
  ptrFunc funArr[] = {myMath::add, myMath::subtract, myMath::multiply,
                      myMath::divide};
  vector<double> results = myMath::calculate(4, 8, funArr, 4);

  for (int i = 0; i < results.size(); i++) {
    cout <<  results[i] << endl;
  }
}

namespace myMath {
    vector<double> calculate(double x, double y, double (*prFun[])(double, double), int size) {
        vector<double> results;
        for (int i = 0; i < size; i++) {
            results.push_back(prFun[i](x, y));
        }
        return results;
    }

    double add(double x, double y) { return x + y; }
    double subtract(double x, double y) { return x - y; }
    double multiply(double x, double y) { return x * y; }
    double divide(double x, double y) { return x / y; }
}