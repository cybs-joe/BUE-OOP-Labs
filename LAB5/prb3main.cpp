#include <iostream>
#include "prb3.h"
#include <string>
using namespace std;

 Book getCheaperBook(Book b1, Book b2){
        if(b1.getPrice() > b2.getPrice()){
            return b2;
        }
        else{
            return b1;
        }
    }
int main(){
    Book b1("The Alchemist", "Paulo Coelho", 250.5);
    Book b2("The Alchemist", "Paulo Coelho", 300.0);
    if(b1 == b2){
        cout << "same book" <<endl;
    }
    else{
        cout << "diff book" << endl;
    }

    Book b3 = getCheaperBook(b1,b2);
    cout << b3.getTitle() << endl;

    Book library[3] = {Book("Atomic Habits", "James Clear", 220.0), Book("Dune", "Frank Herbert", 310.0), Book("The Hobbit", "J.R.R. Tolkien", 275.0)};

    for(int i = 0 ; i <3 ; i++){
        for(int j = i+1 ; j <3 ;j++){
            if (library[i] == library[j]){
                cout <<library[i].getTitle() << endl;
            }
        }
    }
    Book *ptr = new Book("1984", "George Orwell", 200.0);
    cout << ptr->getTitle() << endl;

    if (*ptr == library[0]){
        cout <<"Already exists" << endl;
    }
    else{
        cout << "not in library" << endl;
    }
    delete ptr;
    cout << "Book count: " << Book::getBookCount() << endl;
    return 0;
}