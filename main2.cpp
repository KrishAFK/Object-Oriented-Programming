#include "BankAccount.h"

int main()
{
    BankAccount myAccount("Krish Shah",50000);

    myAccount.display();
    myAccount.deposit(10000);
    myAccount.withdraw(25000);
}