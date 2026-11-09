

#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
	employee e1("Susan Meyers", 47899, "Accounting", "Vice president");
	employee  e2("Mark Jones", 39119 , "IT" , "Programmer");

	employee e3 = e1;
	e3.set_name("John Doe");
	cout << "Name | ID Number | Department | Position" << endl;
	e1.display();
	e2.display();
	e3.display();
	cout << e1.getEmployeeCount();

}
