#pragma once
#include <iostream>
#include "Engine-secC-p2.h"
#include <string>
using namespace std;

class Car{
    private:
    string model;
    string make;
    Engine engine;

    public:
    Car();
    Car(string mod , string mak , int hp , string eng);
    void PrintCarInfo();
};