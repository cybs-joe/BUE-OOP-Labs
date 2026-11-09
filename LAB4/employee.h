#pragma once
#include <iostream>
using namespace std;
class employee
{
private:
	string name;
	int idNumber;
	string department;
	string position;
	static int EmployeeCount;

public:
	employee();
	employee(string n, int id, string dep, string pos);
	employee(string n, int id);
	~employee();
	void set_name(string n);
	void set_idno(int id);
	void set_dep(string dep);
	void set_pos(string pos);
	string get_name();
	int get_id();
	string get_dep();
	string get_pos();
	void display();
	static int getEmployeeCount();





};

