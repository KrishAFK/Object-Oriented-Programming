// Task Description
// You must create a C++ program that models a simple Bank Account.

// Each bank account should store information about:
// The account holder
// The account number
// The account balance
// The program must allow the user to deposit and withdraw money while enforcing rules to ensure valid operations.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string AccountHolderName;
    int AccNumber;
    double balance=0.0;

public:
    double depositamt,withdrawamt;
    //Function to print initial Account Balance
    void InitialBalance() {
        cout << "Enter the name of the Account Holder : " ;
        getline(cin,AccountHolderName);
        cout << "Enter the 6 digit Account Number : ";
        cin >> AccNumber;
        cout << "---------------------------------------------------" << endl;
        cout << "Account Holder : " << AccountHolderName << endl;
        cout << "Account Number : " << AccNumber << endl;
        cout << "Account Balance : $ " << balance << endl;
        cout << "---------------------------------------------------" << endl;

    }
    
    //Function to make deposit
    void deposit(double depositamt) {
        if (depositamt > 0) {
            cout << "Depositing $ " << depositamt << " to Account" << endl;
            balance += depositamt;
            cout << "New Balance : $ " << balance << endl;
            cout << "---------------------------------------------------" << endl;
        }

        else {
            cout << "Please Enter valid deposit amount" << endl;
        }
    }

    //Function to make withdrawal
    void withdrawal(double withdrawamt) {
        if ((withdrawamt >0) && (withdrawamt <= balance)) {
            cout << "Withdrawing $ " << withdrawamt << " from Account" << endl;
            balance -= withdrawamt;
            cout << "New Balance : $ " << balance << endl;
            cout << "---------------------------------------------------" << endl;
        }
        else {
            cout << "Please Enter valid withdrawal amount" << endl;
        }
    }

    void CheckBalance() {
        cout << "Current Balance : $ " << balance << endl;
        cout << "---------------------------------------------------" << endl;
    }
};




int main(){
    double depositamt,withdrawamt;
    BankAccount banking;  //Creating object for class

    banking.InitialBalance();

    //Depositing Money
    cout << "Enter Deposit Amount : $ ";
    cin >> depositamt;
    banking.deposit(depositamt);

    //Withdrawing Money
    cout << "Enter Withdrawal Amount : $ ";
    cin >> withdrawamt;
    banking.withdrawal(withdrawamt);

    //Chceking Balance
    banking.CheckBalance();

}