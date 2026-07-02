#include <iostream>

using namespace std;

int main() {
    float marks;
    cout << "Enter a mark : ";
    cin >> marks;

    if (marks>40) 
    {
        cout << "PASS" << endl;
    }

    if (marks<40) 
    {
        cout << "FAIL" << endl;
    }
}