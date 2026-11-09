#include "circle.h"
#include <iostream>
using namespace std;

int main() {
	double r; 
	cout << "enter radius ";
	cin >> r; 
	circle c1;

	c1.setRadius(r);
	c1.display();


	return 0;
}