#include <iostream>
using namespace std;


// The first 2 years of a dog's age count as 21 human years
// Subsequently, each year is counted as 4 human years

int main()
{
    string name;
    float age;
    float human_age;
    cout << "Enter Name of Dog : " ;
    cin >> name;
    cout << "Enter Age of Dog : "  ;
    cin >> age;

    //Calculating Dog's Age in Human Years
    
    //If age is less than 2 years
    if (age<2)
    {
        cout << "The age of " << name << " is " << (age * 10.5) << endl;
    }


    //If age us more than 2 years
    else
    {
        float temp;
        human_age=21;
        temp=(age-2);
        human_age += (temp*4);
        cout << "The age of " << name << " is " << (human_age) << endl;
    }
    
}