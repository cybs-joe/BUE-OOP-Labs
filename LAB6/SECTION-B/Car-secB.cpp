#include <iostream>
#include "Car-SECB-PRB2.h"
#include "vehicle-SECB-PRB2.h"
#include <string>
using namespace std;

Car::Car(string b , int d):Vehicle(b){
    doors = d;
    cout << "Car constructor (doors: "<< d << ")" << endl;
}
Car::~Car(){
    cout << "Car destructor" << endl;
}