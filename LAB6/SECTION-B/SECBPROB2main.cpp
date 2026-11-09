#include <iostream>
#include "vehicle-SECB-PRB2.h"
#include "Car-SECB-PRB2.h"
#include "ElectricCar-SECB-PRB2.h"
#include <string>

using namespace std;
int main(){
    cout << "--- Creating ec1 ---" << endl;
    {ElectricCar ec1("Tesla" , 4 , 75);
    cout << "--- ec1 is about to go out of scope ---" << endl;}
    cout << "--- Creating c1 and ec2 ---" << endl;
    Car c1("Toyota",4);
    ElectricCar ec2("BYD" , 4 , 60);
    cout << "--- End of main ---" << endl;

    return 0;
}