#pragma once
#include <iostream>
#include <string>
using namespace std;

class Engine{
    private:
    int horsePower;
    string type;

    public:
    Engine();
    Engine(int hp , string ty);
    void printEngineDetails();
};