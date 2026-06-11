// Multi-Level Inheritance is when a property is carried down through multiple levels
// Parent Class -> Child Class -> Grandchild Class
// Linear Inheritance



#include <iostream>
using namespace std;

class First {

public:
    string name;
    int age;

    //Constructor
    First(string name,int age) {
        this->name = name;
        this->age = age;
    }
};

class Second : public First {

public:
    int rollno;

    //Constructor
    Second (string name,int age,int rollno) : First(name,age) {
        this->rollno = rollno;
    }
};

class Third : public Second {

public: 
    string subject;

    //Constructor
    Third (string name,int age,int rollno, string subject) : Second(name,age,rollno) {
        this->subject = subject;
    }

    void getinfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No : " << rollno << endl;
        cout << "Subject : " << subject << endl;
    }
};

int main() {
    Third t("Krish",18,12345,"OOP");
    t.getinfo();
}

