#include "circle.h"
#include <iostream>
using namespace std;

circle::circle()
{
	Radius = 0.0;
}

void circle::setRadius(double r) {
	Radius = r;
};
double circle::getRadius() {
	return Radius;
}
double circle::getArea() {
	double area = PI * (Radius * 2);
	return area;
}
double circle::getDiameter() {
	double diameter = Radius * 2;
	return diameter;
}
double circle::getCircumference() {
	double circumference = 2 * PI * Radius;
	return circumference;
}
void circle::display() {
	cout << "the area is " << getArea() << endl;
	cout << "the diameter is " << getDiameter() << endl;
	cout << "the circ is " << getCircumference() << endl;

	
}

