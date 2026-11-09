#pragma once
#include <iostream>
#include <string>
using namespace std;

class BOX{

private:
    double length;
    double width;
    double height;
    static int boxCount;

public:
    BOX();
    BOX(double l, double w, double h);
    BOX(const BOX& other);
    ~BOX();
    void setLength(double l);
    void setWidth(double w);
    void setHeight(double h);
    double getLength() const;
    double getWidth() const;
    double getHeight() const;
    bool operator>(const BOX& other) const;

    void display() const;

    static int getBoxCount();
};