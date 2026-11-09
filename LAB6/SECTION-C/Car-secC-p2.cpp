#include <iostream>
#include "Engine-secC-p2.h"
#include "Car-secC-p2.h"
#include <string>
using namespace std;

Car::Car(){
    make = "";
    model = "";

}
Car::Car(string mod , string mak , int hp , string eng):engine(hp,eng){
    model = mod;
    make = mak;
}

void Car::PrintCarInfo(){
    cout << "Model: " << model <<endl;
    cout << "Make: " << make <<endl;
    cout << "Engine: " ;
    engine.printEngineDetails();
}