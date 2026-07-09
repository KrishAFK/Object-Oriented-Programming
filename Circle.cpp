#include <iostream>

using namespace std;

const float pi = 3.14159;
class circle 
{
private:
    float radius;

public:
    //Constructor
    circle(float r)
    {
        radius = r;
    }

    void getArea()
    {
        cout << "The area of the circle is  : ";
        cout <<  (pi * radius * radius) << endl;
    }
};

int main()
{
    circle c(5);
    c.getArea();
}