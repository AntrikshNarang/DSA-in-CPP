#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Initialize Vector
    vector <int> myVector;

    // Vector with size 5 and all elements initialized to 1
    vector <int> a(5,1);
    for( int i : a ){
        cout << i << " ";
    }
    cout<<endl;

    vector <int> last(a); // creates a copy of array 'a'

    // Capacity of Vector -> Doubles when it gets full (Determines the memory allocated to the vector)
    cout<<"Capacity is -> "<<myVector.capacity()<<endl;

    // Adding elements to vector
    myVector.push_back(1);
    cout<<"Capacity is -> "<<myVector.capacity()<<endl; // 1

    myVector.push_back(2);
    cout<<"Capacity is -> "<<myVector.capacity()<<endl; // 2

    myVector.push_back(3);
    cout<<"Capacity is -> "<<myVector.capacity()<<endl; // 4
    cout<<"Size is -> "<<myVector.size()<<endl;         // 3

    cout<<"Front Element is "<<myVector.front()<<endl;
    cout<<"Back Element is "<<myVector.front()<<endl;

    // Iterate over the elements of the vector
    cout << "Before Pop: ";
    for (int element : myVector) {
        cout << element << ' ';
    }
    cout << endl;

    myVector.pop_back();
    
    cout << "Before Pop: ";
    for (int i : myVector) {
        cout << i << ' ';
    }
    cout << endl;

    //  clear function empties the array that is size = 0, but does not clears the capacity
    cout<<"Before Clear Size: "<<myVector.size()<<endl;
    myVector.clear();
    cout<<"After Clear Size: "<<myVector.size()<<endl;

    // Get the iterator of the Array
    // myVector.begin() and myVector.end() returns the pointer to the first and last iterator of the vector
    
    return 0;
}