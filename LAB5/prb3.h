#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book{

private:
    string title;
    string author;
    double price;
    static int BookCount;

public:
    Book();
    Book(string t, string a, double p);
    Book(const Book& other);
    ~Book();
    void setTitle(string t);
    void setAuthor(string a);
    void setPrice(double p);
    string getTitle() const;
    string getAuthor() const;
    double getPrice() const;
    bool operator==(const Book& other) const;
    static int getBookCount();
};