#include <iostream>

using namespace std;


class student 
{
private:
    string name;
    float mark;

public:
    //Constructor
    student(string name, float mark)
    {
        this-> name = name;
        this-> mark = mark;
    }

    void getMark()
    {
        cout << "The Mark is  : ";
        cout <<  mark << endl;
    }

    void display()
    {
        cout << "The Name is  : ";
        cout <<  name << endl;
        cout << "The Mark is  : ";
        cout <<  mark << endl;
    }
};

int main()
{
    student s("Krish",92);
    s.getMark();
    s.display();
}