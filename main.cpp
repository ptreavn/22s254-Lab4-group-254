#include "header.h"
#include "helper.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main() {

    ifstream myfile;
    myfile.open(filename());


   readfile(myfile);

    system("Pause");
    return 0;
}