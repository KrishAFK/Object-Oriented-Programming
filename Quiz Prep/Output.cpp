//Find the output of the following code

#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box() {
        width = 10;
    }

    void print() const {
        cout << width;
    }
};

int main() {
    Box b;
    b.print();
    return 0;
}

// The outout will be 10 as Box b in the int main() will run the constructor funtion setting the value of width as 10