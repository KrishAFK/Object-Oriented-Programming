#include <iostream>
using namespace std;

int findLargest(int numbers[], int size) {
    int largest = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    return largest;
}

int main()
{
    int arr[]={1,2,3,4,5};
    cout << findLargest(arr,5);
}