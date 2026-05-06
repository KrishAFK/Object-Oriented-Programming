#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Taking inputs
    int a,b,c;
    cout << "Enter the coefficient - a : " ;
    cin >> a;
    cout << "Enter the coefficient - b : " ;
    cin >> b;
    cout << "Enter the coefficient - c : " ;
    cin >> c;
    
    //Calculating Determinant & Roots
    float D;
    float x1,x2;
    D= (b*b) - (4*a*c);
    if (D>0)
    {
        cout << "There are 2 real roots\n";
        x1=((-1*b)+(sqrt(D)))/(2*a);
        x2=((-1*b)-(sqrt(D)))/(2*a);
        cout << "The roots are " << x1 << " and " << x2 << endl;
    }

    else if (D==0)
    {
        cout << "There is 1 real root\n";
        x1=((-1*b)+(sqrt(D)))/(2*a);
        cout << "The root is " << x1 << endl;
    }

    else
    {
        cout << "There are no real roots\n";
    }

}