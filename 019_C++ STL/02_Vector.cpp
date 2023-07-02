// vector stores data at Contigous memory location
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Initialize Vector
    vector <int> myVector;

    // Vector with size & capacity = 5 and all elements initialized to 1
    vector <int> a(5,1);
    for( int i : a ){
        cout << i << " ";
    }
    cout<<"capacity is " <<a.capacity()<<endl;

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
    cout<<"Back Element is "<<myVector.back()<<endl;

    // Inserting elements at a particular position
    myVector.insert(myVector.begin(), 0);
    myVector.insert(myVector.begin()+2, 4);

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

// Time Complexity of Vector operations
// Operation	Time Complexity
// push_back	O(1)
// pop_back	O(1)
// insert	O(n)
// erase	O(n)
// swap	O(1)
// resize	O(n)
// clear	O(n)
// at	O(1)
// front	O(1)
// back	O(1)
// size	O(1)
// max_size	O(1)
// empty	O(1)
// capacity	O(1)
