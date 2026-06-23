//Find the output of the following code

#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;
    Student s4;

    cout << Student::count;

    return 0;
}

//The output will 4 because each object that is created will add one to the count variable