//STUDENT RESULT MANAGEMENT SYSTEM

// Problem Description :
// You are asked to design and implement a simple Student Result Management System using C++ classes. 
// Each student has a student ID, a name, and three assessment marks.

// Requirements :
// • Create a Student class with data members
// • Use a constructor to initialise the data
// • Implement member functions to calculate average, highest, and lowest marks
// • Determine whether a student has passed or failed (pass if average ≥ 40)
// • Store multiple students 

#include <iostream>
#include <string>
using namespace std;

class students {
public:
    string name;
    float sub1,sub2,sub3,total,avg;

    //Function to take input of subject marks
    void input()
    {
        cout << "Enter the Name of the student : ";
        cin >> name;
        cout << "Enter makrs of subject 1 : " ;
        cin >> sub1 ; 
        cout << "Enter makrs of subject 2 : " ;
        cin >> sub2 ;
        cout << "Enter makrs of subject 3 : " ;
        cin >> sub3 ;
    }

    //Function to calculate the average marks
    void average()
    {
        total = sub1 + sub2 + sub3;
        avg = (total / 3);
        cout << "The Average of " << name << " is " << avg << endl;
    }

    //Function to calculate the highes marks
    void highest()
    {
        if ((sub1 > sub2) && (sub1 > sub3))
        {
            cout << "The highest marks are " << sub1 << endl;
        }
        
        else if ((sub2 > sub1) && (sub2 > sub3))
        {
            cout << "The highest marks are " << sub2 << endl;
        }

        else
        {
            cout << "The highest marks are " << sub3 << endl;
        }

    }

    //Function to calculate the lowest marks
    void lowest()
    {
        if ((sub1 < sub2) && (sub1 < sub3))
        {
            cout << "The Lowest marks are " << sub1 << endl;
        }
        
        else if ((sub2 < sub1) && (sub2 < sub3))
        {
            cout << "The Lowest marks are " << sub2 << endl;
        }

        else
        {
            cout << "The Lowest marks are " << sub3 << endl;
        }

    }

    //Function to check if the student passed or failed
    void passorfail()
    {
        if (avg >= 40)
        {
            cout << "The student " << name << " has passed." << endl;
        }
        else
        {
            cout << "The student " << name << " has failed." << endl;
        }
    }
};

int main()
{
    int num;
    cout << "Enter the Number of students : " ;
    cin >> num;
    for (int i=0;i<num;i++)
    {
        students s1;  //Creating object for the class
        s1.input();
        s1.average();
        s1.highest();
        s1.lowest();
        s1.passorfail();
        cout << "-----------------------------------------------" << endl;
    }
}