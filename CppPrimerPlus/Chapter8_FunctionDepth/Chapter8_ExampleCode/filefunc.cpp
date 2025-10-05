#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <ios>
#include <iostream>
#include <ostream>

using namespace std;

void file_it(ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main() {
    //创建文件输出流对象,输出到ep-data文件
  ofstream fout;
  const char* fn = "ep-data.txt";
  //检测是否打开,如果没打开输出异常
  fout.open(fn);
  if (!fout.is_open()) {
    cout << "Can't open " << fn << ". Bye.\n";
    exit(EXIT_FAILURE);
  }
//获取输入的物镜焦距
  double objective;
  cout << "Enter the focal length of your"
          "telescope objective in mm: ";
  cin >> objective;

  //循环获取输入五个目镜焦距
  double eps[LIMIT];
  cout << "Enter the focal lengths,in mm,of " << LIMIT << " eyepieces:\n";
  for (int i = 0; i < LIMIT; i++) {
    cout << "Eyepiece #" << i + 1 << ": ";
    cin >> eps[i];
  }

  //格式化输出
  file_it(fout, objective, eps, LIMIT);//输出到文件
  file_it(cout, objective, eps, LIMIT);//输出到屏幕
  cout << "Done\n";
  return 0;
}

//格式化输出函数
void file_it(ostream& os, double fo, const double fe[], int n) {
  ios_base::fmtflags initial;
  initial = os.setf(ios_base::fixed);
  os.precision(0);
  os << "Focal length of objective: " << fo << " mm\n";
  os.setf(ios_base::showpoint);
  os.precision(1);
  os.width(12);
  os << "f.l. eyepiece";
  os.width(15);
  os << "magnification" << endl;
  for (int i = 0; i < n; i++) {
    os.width(12);
    os << fe[i];
    os.width(15);
    os << int(fo / fe[i] + 0.5) << endl;
  }
  os.setf(initial);
}