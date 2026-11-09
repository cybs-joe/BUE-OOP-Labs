#include <iostream>
#include "prb4.h"
#include <string>
using namespace std;
int BOX::boxCount =0;

BOX::BOX(){
    length = 0.0;
    width = 0.0;
    height = 0.0;
    boxCount++;
}
BOX::BOX(double l, double w, double h){
    length = l;
    width = w;
    height = h;
    boxCount++;
}

BOX::BOX(const BOX& other){
    length = other.length;
    width = other.width;
    height = other.height;
    boxCount++;
}
BOX::~BOX(){
    cout << "Box object destroyed" <<endl; 
    boxCount--;
}

void BOX::setLength(double l){
    length = l;
}
void BOX::setWidth(double w){
    width = w;
}
void BOX::setHeight(double h){
    height = h;
}

double BOX::getLength() const{
    return length;
}
double BOX::getWidth() const{
    return width;
}
double BOX::getHeight() const{
    return height;
}

bool BOX::operator>(const BOX& other) const{
    return (length * width * height) > (other.length * other.width * other.height);
}

void BOX::display() const{
    cout << length << endl;
    cout << width << endl;
    cout << height << endl;
}

int BOX::getBoxCount(){
    return boxCount;
}