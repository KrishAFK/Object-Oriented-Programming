#include <iostream>
#include <vector>
#include "Vehicle.h"


int main() {
    // Task 3: Create a vector of pointers to Vehicle objects
    std::vector<Vehicle*> fleet;

    // Store instances of Car, Ship, and Airplane dynamically
    fleet.push_back(new Car("Toyota", "Supra", 2022, "Red", 420));
    fleet.push_back(new Ship("Royal Caribbean", "Titanic", 2024, "Blue", 4));
    fleet.push_back(new Airplane("Boeing", "747", 2019, "White", 4));

    std::cout << "--- Fleet Details ---" << std::endl;
    
    // Loop through the vector and call printDetails() polymorphically
    for (const auto& vehicle : fleet) {
        vehicle->printDetails();
    }

    // Clean up memory to prevent leaks
    for (auto& vehicle : fleet) {
        delete vehicle;
    }
    fleet.clear();

    return 0;
}