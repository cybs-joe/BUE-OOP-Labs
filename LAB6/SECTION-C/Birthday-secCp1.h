#pragma once
#include <iostream>
#include <string>
using namespace std;

class Birthday{
    private:
    int day;
    int month;
    int year;
    public:
    Birthday();
    Birthday(int d ,int m ,int y);
    void printBirthday();
};