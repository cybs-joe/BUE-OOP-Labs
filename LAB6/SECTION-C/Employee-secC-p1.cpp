#include <iostream>
#include "Birthday-secCp1.h"
#include "Employee-secC-p1.h"
#include <string>
using namespace std;

Employee::Employee(){
    name = "";
    ID = 0;
}

Employee::Employee(string n , int  i , Birthday d){
    name  = n;
    ID = i;
    dateOfBirth = d;
}

void Employee::printInfo(){
    cout << "The employee name is: " << name <<  endl;
    cout << "and his birthday is on: " ;
    dateOfBirth.printBirthday();
}