#include <iostream>
#include "prb2.h"
#include <string>
using namespace std;
int main(){
    VideoGame g1("Elden Ring", "RPG", 59.99, 9.5);
    VideoGame g2("Stardew Valley", "Simulation", 14.99, 8.8);
    VideoGame g3("hello tst","tst",12.22 , 8.0);
    g1.displayDetails();
    g2.displayDetails();
    g3.displayDetails();
    cout << "Game count: " << VideoGame::getGameCount() << endl;
}