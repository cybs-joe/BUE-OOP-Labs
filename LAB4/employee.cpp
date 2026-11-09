#include "employee.h"
#include <iostream>
using namespace std;

 int employee::EmployeeCount=0;


employee::employee() {
	name = "";
	idNumber = 0;
	department = "";
	position = "";
	EmployeeCount++;
}
employee::employee(string n, int id, string dep, string pos) {
	name = n;
	idNumber = id;
	department = dep;
	position = pos;
	EmployeeCount++;
}

employee::employee(string n, int id) {
	department = "";
	position = "";
	EmployeeCount++;
}




employee::~employee(){
	cout << "Employee object destroyed";
	EmployeeCount--;
}

void employee::set_name(string n) {
	name = n;
}

void employee::set_idno(int id) {
	idNumber = id;
}

void employee::set_dep(string dep) {
	department = dep;
}

void employee::set_pos(string pos) {
	position = pos;
}


string employee::get_name() {
	return name;
}

int employee::get_id() {
	return idNumber;
}

string employee::get_dep() {
	return department;
}
string employee::get_pos() {
	return position;
}

int employee::getEmployeeCount() {
	return EmployeeCount;
}

void employee::display() {
	cout << name << endl;
	cout << idNumber << endl;
	cout << department << endl;
	cout << position << endl;

}