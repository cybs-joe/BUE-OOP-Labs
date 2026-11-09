#include <iostream>
#include <string>
#include "Employee-secB.h"
using namespace std;

Employee::Employee(){
    Name = "";
    ID = 0;
    HireDate = "";
    cout << "Employee constructor called" << endl;

}
Employee::Employee(string n , int i, string hd){
    Name = n;
    ID = i;
    HireDate = hd;
    cout << "Employee parameterized constructor called" << endl;
}
Employee::~Employee(){
    cout << "Employee destructor called" << endl;
}
void Employee::setName(string n){
    Name = n;
}
void Employee::setID(int i){
    ID = i;
}
void Employee::setHireDate(string hd){
    HireDate = hd;
}

string Employee::getName(){
    return Name;
}
int Employee::getID(){
    return ID;
}
string Employee::getHireDate(){
    return HireDate;
}
void Employee::displayinfo(){
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "HireDate: " << getHireDate() << endl;

}