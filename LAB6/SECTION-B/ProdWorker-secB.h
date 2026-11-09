#pragma once
#include "Employee-secB.h"
#include <iostream>
#include <string>
using namespace std;

class ProductionWorker:public Employee{
    private:
    int Shift;
    double HourlyPayRate;

    public:
    ProductionWorker();
    ProductionWorker(string n , int i , string hd , int shift , double rate);
    ~ProductionWorker();
    int getShift();
    void setShift(int shift);
    double getHourlyPayRate();
    void setHourPayRate(double rate);
    string getShiftName();
    void displayWorkerInfo();
};