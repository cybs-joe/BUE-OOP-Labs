#pragma once
#include <iostream>
#include "Birthday-secCp1.h"
#include <string>
using namespace std;

class Employee{
    private:
    string name;
    int ID;
    Birthday dateOfBirth;
    public:
    Employee();
    Employee(string n , int i ,Birthday d);
    void printInfo();
};