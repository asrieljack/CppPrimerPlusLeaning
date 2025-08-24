#include <fstream>
#include <iostream>
#include <string>

using namespace std;
const int SIZE = 60;

struct Contributor {
  string name;
  double deposit;
};

int main() {
  char fileName[SIZE];
  ifstream inputFile;

  cout << "Please enter fileName: ";
  cin.getline(fileName, SIZE);
  inputFile.open(fileName);
  if (!inputFile.is_open()) {
    cout << "Could not open the file " << fileName << endl;
    cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }

  int numContributors;
  inputFile >> numContributors;
  inputFile.ignore();

  Contributor* contributors = new Contributor[numContributors];
  for (int i = 0; i < numContributors; ++i) {
    getline(inputFile, contributors[i].name);
    inputFile>>contributors[i].deposit;
    inputFile.ignore();
  }

    inputFile.close(); 

      
    cout << "\n=== 捐赠者列表 ===" << endl;
    
    
    cout << "\nGrand Patrons:" << endl;
    bool hasGrandPatrons = false;
    for (int i = 0; i < numContributors; i++) {
        if (contributors[i].deposit > 10000) {
            cout << "姓名: " << contributors[i].name 
                 << ", 捐赠金额: $" << contributors[i].deposit << endl;
            hasGrandPatrons = true;
        }
    }
    if (!hasGrandPatrons) {
        cout << "none" << endl;
    }
    

    cout << "\nPatrons:" << endl;
    bool hasPatrons = false;
    for (int i = 0; i < numContributors; i++) {
        if (contributors[i].deposit <= 10000) {
            cout << "姓名: " << contributors[i].name 
                 << ", 捐赠金额: $" << contributors[i].deposit << endl;
            hasPatrons = true;
        }
    }
    if (!hasPatrons) {
        cout << "none" << endl;
    }
    
   
    delete[] contributors;
    
    return 0;
}