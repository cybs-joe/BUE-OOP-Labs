#include "Birthday-secCp1.h"
#include <iostream>
#include <string>
using namespace std;

Birthday::Birthday(){
    day = 0;
    month = 0;
    year = 0;
}
Birthday::Birthday(int d , int m , int y){
    day = d;
    month = m;
    year = y;
}

void Birthday::printBirthday(){
    cout << day << " " << month << " " << year << endl;
}