#include <iostream>
#include "prob1.h"
#include <string>
using namespace std;
string BankAccount::bankname = "";

BankAccount :: BankAccount(){
    accountNumber  = 0;
    ownerName = "";
    balance = 0;
}
BankAccount::BankAccount(int accnum , string owner , double bal){
    accountNumber = accnum;
    ownerName = owner;
    balance = bal;
}

BankAccount::~BankAccount(){
    cout << "Account object destroyed"<<endl;
}

void BankAccount::setBankName(string name){
    bankname = name;
}

string BankAccount::getBankName(){
    return bankname;
}

void BankAccount:: setAccountNumber(int number){
    accountNumber = number;
}
void BankAccount::setOwnerName(string name){
    ownerName = name;
}
void BankAccount::setBalance(double amount){
    balance = amount;
}
int BankAccount::getAccountNumber(){
    return accountNumber;
}
string BankAccount::getOwnerName(){
    return ownerName;
}
double BankAccount::getBalance(){
    return balance;
}
void BankAccount::deposit(double amount){
    if(amount >0){
    balance += amount;
    }
    else{
        cout << "Invalid deposit amount"<<endl;
    }
}
void BankAccount:: withdraw(double amount){
    if(amount <= 0){
        cout << "Invalid amount"<<endl;
    }
    else if(amount > balance){
        cout << "Insufficient funds"<<endl;
    }
    else{
        balance -= amount;
    }
}

void BankAccount::displayinfo(){
    cout << bankname << endl;
    cout << ownerName << endl;
    cout << accountNumber << endl;
    cout << balance << endl;

}

