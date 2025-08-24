#include <iostream>
#include <cstring>

using namespace std;

const int STRSIZE = 50;
const int MEMBER_COUNT = 5;

// Benevolent Order of Programmer name structure
struct BopMember {
    char fullname[STRSIZE];    // real name
    char title[STRSIZE];       // job title
    char bopname[STRSIZE];     // secret bop name
    int preference;            // 0 = fullname, 1 = title, 2 = bopname
};

int main() {
    // Initialize array of BOP members
    BopMember members[MEMBER_COUNT] = {
        {"Wimp Macho", "Software Engineer", "WMACHO", 0},
        {"Raki Rhodes", "Junior Programmer", "RHODES", 1},
        {"Celia Laiter", "MIPS", "CLANITER", 2},
        {"Hoppy Hipman", "Analyst Trainee", "HIPMAN", 1},
        {"Pat Hand", "LOOPY", "PATHAND", 2}
    };

    char choice;
    
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name    b. display by title" << endl;
    cout << "c. display by bopname d. display by preference" << endl;
    cout << "g. quit" << endl;
    
    do {
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 'a': // Display by real name
                for (int i = 0; i < MEMBER_COUNT; i++) {
                    cout << members[i].fullname << endl;
                }
                break;
                
            case 'b': // Display by title
                for (int i = 0; i < MEMBER_COUNT; i++) {
                    cout << members[i].title << endl;
                }
                break;
                
            case 'c': // Display by bopname
                for (int i = 0; i < MEMBER_COUNT; i++) {
                    cout << members[i].bopname << endl;
                }
                break;
                
            case 'd': // Display by preference
                for (int i = 0; i < MEMBER_COUNT; i++) {
                    switch (members[i].preference) {
                        case 0:
                            cout << members[i].fullname << endl;
                            break;
                        case 1:
                            cout << members[i].title << endl;
                            break;
                        case 2:
                            cout << members[i].bopname << endl;
                            break;
                    }
                }
                break;
                
            case 'g': // Quit
                cout << "Bye!" << endl;
                break;
                
            default:
                cout << "Please enter a, b, c, d, or g: ";
                break;
        }
        
        if (choice != 'g') {
            cout << "Next choice: ";
        }
        
    } while (choice != 'g');

    return 0;
}