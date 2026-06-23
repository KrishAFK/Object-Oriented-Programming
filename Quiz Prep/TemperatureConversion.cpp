//Write a C++ program that asks the user for a temperature in Celsius and converts it to Fahrenheit using a function.
//
//The formula is:
//
//F = C × 9 / 5 + 32

#include <iostream>

using namespace std;


void Celcius(float temp)
{
    float celcius;
    celcius = (temp-32) * (5.0/9.0);
    cout << "The temperature is " << celcius << " C." << endl;
}

void Fahr(float temp)
{
    float fahr;
    fahr = ((temp * (9.0/5.0)) + 32 );
    cout << "The temperature is " << fahr << " F." << endl;
}


int main()
{
    float temp;
    string convert;

    cout << "Enter the temperature : ";
    cin >> temp;

    cout << "Convert to (F/C) : ";
    cin >> convert;

    if (convert == "C")
    {
        Celcius(temp);
    }

    if (convert == "F")
    {
        Fahr(temp);
    }
}