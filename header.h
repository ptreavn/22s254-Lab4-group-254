#include <fstream>
#include <iostream>
using namespace std;

void readfile(ifstream& infile);

void readfile(ifstream& infile) {
    if (infile.is_open()) {
        char mychar;
        while (infile.good()) {
            mychar = infile.get();
            cout << mychar;
        }
    }
    
}
