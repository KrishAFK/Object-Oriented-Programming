#include <iostream>
using namespace std;

class Product {

private:
    string name;
    double price;

public:
    //Constrcutor
    Product(string name,double price) {
        Setname(name);
        Setprice(price);
    }

    void Setname(string name) {
        this->name=name;
    }

    void Setprice(double price) {
        this->price=price;
    }

    void Getname() {
        cout << "The name is " << name << endl;
    }

    void Getprice() {
        cout << "The price is " << price << endl;
    }

    void printDetails() {
        Getname();
        Getprice();
    }
};

int main() {
    Product p("Krish",1000.0);
    p.printDetails();
}