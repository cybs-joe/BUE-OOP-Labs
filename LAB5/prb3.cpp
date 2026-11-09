#include <iostream>
#include "prb3.h"
#include <string>
using namespace std;
int Book::BookCount = 0;

Book::Book(){
    title = "";
    author  = "";
    price = 0.0;
    BookCount++;
}
Book::Book(string t, string a, double p){
    title = t;
    author = a;
    price = p;
    BookCount++;
}
Book::Book(const Book& other){
    title = other.title;
    author = other.author;
    price = other.price;
    BookCount++;
}
Book::~Book(){
    cout << "Book object destroyed" << endl;
    BookCount--;
}
void Book::setTitle(string t){
    title = t;
}
void Book::setAuthor(string a){
    author = a;
}
void Book::setPrice(double p){
    price = p;
}
string Book::getTitle() const{
    return title;
}
string Book::getAuthor() const{
    return author;
}
double Book::getPrice() const{
    return price;
}
bool Book::operator==(const Book& other) const{
   return title == other.title && author == other.author;
}
int Book::getBookCount(){
    return BookCount;
}