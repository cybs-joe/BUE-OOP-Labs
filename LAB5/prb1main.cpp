#include <iostream>
#include "prob1.h"
using namespace std;
int main(){
    BankAccount::setBankName("OpenAI Bank");
    BankAccount a1(12345 , "Alice" , 1000.0);
    a1.deposit(250.0);
    a1.withdraw(100.0);
    a1.displayinfo();

}