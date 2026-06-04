#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class BankAccount {

private:
    string accountHolder;
    double balance;

public:
    //Constructor
    BankAccount(string name,double initialBalance);

    //Member Functions
    void deposit(double amount);
    void withdraw(double amount);
    void display() const;

};

#endif