#include <iostream>
using namespace std;

class Parent {

public:
    string name;
    int age;

    //Constructor
    Parent(string name,int age) {
        this->name = name;
        this->age = age;
    }
};

class Child : public Parent {

public:
    int rollno;

    //Constructor
    Child(string name,int age, int rollno) : Parent(name,age) {
        this->rollno = rollno;
    }

    void getinfo(){
        cout << "Name" << name << endl;
        cout << "Age" << age << endl;
        cout << "Roll No" << rollno << endl;
    }
};

int main() {
    Child c("Krish",18,12345);

}