// Multiple Inheritance is when a property is carried down through multiple parent classes
// Parent Class 1   Parent Class 2
//             \     /
//            Child Class

#include <iostream>
using namespace std;

class Parent1 {

public:
    string fathername;

    //Constructor
    Parent1 (string fathername) {
        this->fathername = fathername;
    }
};

class Parent2 {

public:
    string mothername;

    //Constructor
    Parent2(string mothername) {
        this->mothername = mothername;
    }
};

//Inherits from both the above classes
class child : public Parent2, public Parent1 {
public:
    string childname;

    //Constructor
    child(string childname,string fathername,string mothername) : Parent1(fathername) , Parent2(mothername) {
        this->childname=childname;
    }

    void getinfo() {
        cout << "Child Name : " << childname << endl;
        cout << "Father Name : " << fathername << endl;
        cout << "Mother Name : " << mothername << endl;
    }
};

int main() {
    child c ("Krish","Alex","Grace");

    c.getinfo();
}