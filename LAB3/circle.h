#pragma once
class circle
{
private:
	double Radius;
	double PI = 3.14159;
public :
	circle();
	void setRadius(double r);
	double getRadius();
	double getArea();
	double getDiameter();
	double getCircumference();
	void display();


};

