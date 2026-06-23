//FIND THE ERROR IN THE FOLLOWING CODE

// #include <iostream>
// using namespace std;

// void displayMessage();

// cout << "Starting program";

// void displayMessage() {
//     cout << "Welcome to C++";
// }

// int main() {
//     displayMessage();
//     return 0;
// }


// CORRECTED CODE :

#include <iostream>
using namespace std;

void displayMessage();

void displayMessage() 
{
    cout << "Welcome to C++";
}

int main() {
    cout << "Starting program";
    displayMessage();
    return 0;
}