#include <iostream>
#include <string>
#include "Car-SECB-PRB2.h"
#include "ElectricCar-SECB-PRB2.h"
using namespace std;

ElectricCar::ElectricCar(string b , int d , int kwh):Car( b, d){
    batteryKWh = kwh;
    cout << "ElectricCar constructor (battery: "<< kwh << " kWh" <<")" << endl;
}
ElectricCar::~ElectricCar(){
    cout << "ElectricCar destructor" << endl;
}
