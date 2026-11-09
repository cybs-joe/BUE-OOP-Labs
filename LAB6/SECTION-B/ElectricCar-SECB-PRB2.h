#pragma once
#include <iostream>
#include <string>
#include "Car-SECB-PRB2.h"
using namespace std;

class ElectricCar:public Car{
    private:
    int batteryKWh;
    public:
    ElectricCar(string b , int d , int kwh);
    ~ElectricCar();
};