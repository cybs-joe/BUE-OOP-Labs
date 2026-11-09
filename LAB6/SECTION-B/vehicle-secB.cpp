#include <iostream>
#include "vehicle-SECB-PRB2.h"
#include <string>
using namespace std;

Vehicle::Vehicle(string b){
    brand = b;
    cout  << "Vehicle constructor " << "(brand: " << b << ")"<< endl;
}
Vehicle::~Vehicle(){
    cout << "Vehicle destructor" << endl;
}
