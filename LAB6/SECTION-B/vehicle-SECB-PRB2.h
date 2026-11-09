#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected:
    string brand;
    
    public:
    Vehicle(string b);
    ~Vehicle();
};