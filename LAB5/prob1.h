#pragma once
#include <iostream>
#include <string>
using namespace std;
class BankAccount{

    private:
    int accountNumber;
    string ownerName;
    double balance;
    static string bankname;

    public:
    BankAccount();
    BankAccount(int accunm , string owner , double bal);
    ~BankAccount();
    void setAccountNumber(int number);
    void setOwnerName(string name);
    void setBalance(double amount);
    int getAccountNumber();
    string getOwnerName();
    double getBalance();
    void deposit(double amount);
    void withdraw(double amount);
    void displayinfo();
    static void setBankName(string name);
    static string getBankName();
};