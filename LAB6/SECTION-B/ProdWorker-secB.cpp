#include <iostream>
#include "ProdWorker-secB.h"
#include "Employee-secB.h"
using namespace std;

ProductionWorker::ProductionWorker(){
    Shift = 0;
    HourlyPayRate = 0.0;
    cout << "ProductionWorker constructor called" << endl;
}
ProductionWorker::ProductionWorker(string n , int i , string hd , int shift , double rate):Employee( n,  i,  hd){
    Shift = shift;
    HourlyPayRate = rate;
    cout << "ProductionWorker parameterized constructor called" << endl;
}
ProductionWorker::~ProductionWorker(){
    cout << "ProductionWorker destructor called" << endl;
}

void ProductionWorker::setShift(int shift){
    Shift = shift;
}
void ProductionWorker::setHourPayRate(double rate){
    HourlyPayRate = rate;
}
int ProductionWorker::getShift(){
    return Shift;
}
double ProductionWorker::getHourlyPayRate(){
    return HourlyPayRate;
}
string ProductionWorker::getShiftName(){
    if (Shift == 1){
        return "Day";
    }
    else {
        return "Night";
    }
}
void ProductionWorker::displayWorkerInfo(){
    displayinfo();
    cout << "Shift Name: " << getShiftName() <<endl;
    cout << "Shift: " << getShift()<<endl;
    cout << "Hour Pay rate: " << getHourlyPayRate() <<endl;
}