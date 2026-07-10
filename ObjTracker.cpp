#include <iostream>

using namespace std;

static int count = 0;

class ObjectTracker 
{
public:
    //Constructor
    ObjectTracker()
    {
        count+=1;
    }

    void getCount()
    {
        cout << "The count is  : ";
        cout <<  count << endl;
    }
};

int main()
{
    ObjectTracker o;
    o.getCount();
}