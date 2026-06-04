#include "BankAccount.h"

using namespace std;

//Constructor
BankAccount::BankAccount(string name,double initialBalance) {
    accountHolder=name;
    balance=(initialBalance >=0) ? initialBalance:0;
}

//Deposit Function
void BankAccount::deposit(double amount) {
    if (amount>0)
    {
        balance+=amount;
        cout << "Deposited $" << amount << ".\nNew Balance : $" << balance << endl;
    }
    else
    {
        cout << "Invalid deposit amount." << endl;
    }
}


//Withdraw function
void BankAccount::withdraw(double amount) 
{
    if (amount > 0 && amount <=balance)
    {
        balance -= amount;
        cout << "Withdrew $" << amount << ".\nRemaining Balance : $" << balance << endl;
    }
    else
    {
        cout << "Insufficient funds or Invalid amount." << endl;
    }
}

void BankAccount::display() const {
    cout << "Account Holder : " << accountHolder << endl;
    cout << "Account Balance : " << balance << endl;
}