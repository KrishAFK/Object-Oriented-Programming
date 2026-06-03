// Vending Machine Simulator (C++ Project)
// Create a vending machine program using C++ to practise encapsulation.

// Project Goals
// ~ Use classes and objects
// ~ Use private and public access modifiers
// ~ Protect data using encapsulation
// ~ Create methods to control object behaviour

// Program Features :
// ~ Display item information
// ~ Insert money
// ~ Buy item
// ~ Return change

#include <iostream>
#include <string>
#include <vector>

using namespace std;



class VendingMachine {

private:
    struct VendingItem {
    int id;
    string name;
    double price;
    int stock;
    };



    // Encapsulated data
    vector<VendingItem> inventory = {
        {0, "Diet Coke",          1.75, 12},
        {1, "Monster Energy",     2.25, 8},
        {2, "RedBull",            2.50, 5},
        {3, "Sparkling Water",    1.50, 15},
        {4, "Potato Chips",       1.25, 10},
        {5, "Nachos",             1.25, 10},
        {6, "Chocolate Bar",      1.50, 6},
        {7, "Pringles",           1.20, 9},
        {8, "Lays Chips",         1.10, 14},
        {9, "Granola Bar",        1.35, 7}
    };

public: 
    float moneyInserted;
    int choice;
    // Public interface method to display the inventory data
    void displayMenu() {
        cout << "==== Vending Machine Menu ====\n";
        for (const auto& item : inventory) {
            cout << "[" << item.id << "] " 
                 << item.name << " - $" << item.price 
                 << " (" << item.stock << " remaining)\n";
        }
        cout << "---------------------------------------------------" << endl;
    }


    float insertMoney(){
        cout << "Enter amount : $ " ;
        cin >> moneyInserted ;
        if (moneyInserted > 0)
        {
            cout << "Money Inserted Successfully" << endl ;
        }

        else
        {
            cout << "Please Enter valid amount" << endl;
        }
        cout << "---------------------------------------------------" << endl;
        return moneyInserted;
    }


    int buyItem(){
        
        cout << "Enter Item Number : " ;
        cin >> choice ;

        if (moneyInserted > inventory[choice].price)
        {
            cout << "Item dispensed Successfully" << endl ;
        }


        else 
        {
            cout << "Insufficient Cash" << endl ;
        }

        ((inventory[choice].stock)-1);
        cout << "---------------------------------------------------" << endl;
        return choice;
    }


    void returnChange(float moneyInserted, int choice){
    // Subtract the item's price from the money inserted
        if ((moneyInserted - inventory[choice].price) <0)
        {
            cout << "Add More Cash" << endl;
        }

        else
        {
        cout << "Return Change : " << (moneyInserted - inventory[choice].price) << endl;
        cout << "Change returned Successfully" << endl;
        }
    }
};


int main() {
    float a;
    int b;
    // Creating an instance of our class
    VendingMachine machine;

    // Interacting with the class via its public method
    machine.displayMenu();
    a=machine.insertMoney();
    b=machine.buyItem();
    machine.returnChange(a,b);

    return 0;
}