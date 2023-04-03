#include<iostream>
#include<array>
using namespace std;
int main() {
    // Create an array of 5 integers
    array<int, 5> myArray = {1, 2, 3, 4, 5};

    // Access elements using the [] operator
    cout << "The first element is: " << myArray[0] << endl;

    // Access elements using the at() function
    cout << "The element at index 2 element is: " << myArray.at(2) << endl;

    // Get the size of the array
    cout << "The size of the array is: " << myArray.size() << endl;

    // Get the first and Last Element of the Array
    cout << "The Front of the array is: " << myArray.front() << endl;
    cout << "The back of the array is: " << myArray.back() << endl; 

    // Check if Array is empty
    cout<<"Empty-> "<<myArray.empty()<<endl;

    // Iterate over the elements of the array
    cout << "The elements of the array are: ";
    for (int element : myArray) {
        cout << element << ' ';
    }
    cout << endl;

    return 0;
}