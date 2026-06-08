#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

using namespace std;

// Base Class
class Vehicle
{
protected:
    string make;
    string model;
    int year;
    string color;

public:
    // Constructor
    Vehicle(string mk, string mdl, int yr, string clr)
    {
        make = mk;
        model = mdl;
        year = yr;
        color = clr;
    }

    // Virtual function
    virtual void printDetails()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
    }

    // Virtual destructor
    virtual ~Vehicle() {}
};

// Derived Class: Car
class Car : public Vehicle
{
private:
    int trunkCapacity;

public:
    Car(string mk, string mdl, int yr, string clr, int tc)
        : Vehicle(mk, mdl, yr, clr)
    {
        trunkCapacity = tc;
    }

    void printDetails() override
    {
        Vehicle::printDetails();
        cout << "Trunk Capacity: " << trunkCapacity << endl;
        cout << "------------------------" << endl;
    }
};

// Derived Class: Ship
class Ship : public Vehicle
{
private:
    int numberOfAnchors;

public:
    Ship(string mk, string mdl, int yr, string clr, int anchors)
        : Vehicle(mk, mdl, yr, clr)
    {
        numberOfAnchors = anchors;
    }

    void printDetails() override
    {
        Vehicle::printDetails();
        cout << "Number of Anchors: " << numberOfAnchors << endl;
        cout << "------------------------" << endl;
    }
};

// Derived Class: Airplane
class Airplane : public Vehicle
{
private:
    int numberOfEngines;

public:
    Airplane(string mk, string mdl, int yr, string clr, int engines)
        : Vehicle(mk, mdl, yr, clr)
    {
        numberOfEngines = engines;
    }

    void printDetails() override
    {
        Vehicle::printDetails();
        cout << "Number of Engines: " << numberOfEngines << endl;
        cout << "------------------------" << endl;
    }
};

#endif