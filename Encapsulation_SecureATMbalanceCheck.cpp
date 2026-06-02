// Exercise 2: Secure ATM Balance Check
// Objective: Demonstrate private member access through a public method
// Expected Output:
// • Compiler error when accessing accountBalance directly.
// • Correct output using public method:
// ie : Your balance is: £1500.75





#include <iostream>

using namespace std;

class Balance {

private:
    float balance=50000.0;          // Since the variable is private, It cant be changed outside this branch

public:

    void CheckBalance() {
        cout << "Current Balance : $ " << balance << endl;
    }

};

int main() {
    string AccountHolderName;
    int AccNumber;
    Balance b;
    cout << "Welcome to the Secure ATM Balance Check Program" << endl;
    cout << "Enter the name of the Account Holder : " ;
    getline(cin,AccountHolderName);
    cout << "Enter the 6 digit Account Number : ";
    cin >> AccNumber;
    cout << "---------------------------------------------------" << endl;
    cout << "Account Holder : " << AccountHolderName << endl;
    cout << "Account Number : " << AccNumber << endl;
    //balance=50000;                    // Will Give error if we try to directly change the balance
    b.CheckBalance();                   // Will Work as we just access the data of the balance variable, not change it
    cout << "---------------------------------------------------" << endl;
}