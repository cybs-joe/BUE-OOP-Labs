#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    string Name;
    int ID;
    string HireDate;1

    public:
    Employee();
    Employee(string n , int i, string hd);
    ~Employee();
    string getName();
    void setName(string n);
    int getID();
    void setID(int i);
    string getHireDate();
    void setHireDate (string hd);
    void displayinfo();

};