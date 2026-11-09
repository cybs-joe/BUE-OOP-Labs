#pragma once
#include <iostream>
#include <string>
#include "vehicle-SECB-PRB2.h"
using namespace std;

class Car:public Vehicle{
    protected:
    int doors;
    public:
    Car(string b , int d);
    ~Car();
};
