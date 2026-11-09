#include <iostream>
#include "Employee-secC-p1.h"
#include "Birthday-secCp1.h"
#include <string>
using namespace std;

int main(){
    Birthday bd(25,5,2002);
    Employee emp1("Hesham" , 1256 , bd);

    emp1.printInfo();
}