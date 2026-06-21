// Heirarchial Inheritance is when a property is carried down to multiple Child Clasess
//             Parent Class 
//               /        \
//     Child Class 1    Child CLass 2

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

class Child1 : public Parent{

public:
    string child1name;

    //Constructor
    Child1(string child1name,string name,int age) : Parent(name,age) {
        this->child1name = child1name;
    }

    void getinfo1() {
        cout << "First Child Name : " << child1name << endl;
        cout << "Parent Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "-----------------------------------" << endl;
    }
};

class Child2 : public Parent{

public:
    string child2name;

    //Constructor
    Child2(string child2name,string name,int age) : Parent(name,age) {
        this->child2name = child2name;
    }

    void getinfo2() {
        cout << "Second Child Name : " << child2name << endl;
        cout << "Parent Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    Child1 c1 ("Max","Carlos",35);
    Child2 c2 ("Charles","Lewis",40);

    c1.getinfo1();
    c2.getinfo2();
}

