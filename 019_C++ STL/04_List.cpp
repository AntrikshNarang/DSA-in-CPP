// List is made using Doubly Linked List
// List is a dynamic array
// List is a combination of vector and deque
// List is a double ended queue
// It does not allow direct access to elements

// Write a program for implementing list stl in cpp
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> mylist;
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_front(3);
    mylist.push_front(4);
    mylist.erase(mylist.begin()); // remove first element
    cout<<"size of list is: "<<mylist.size()<<endl;

    list<int> l(5,10); // 5 elements with value 10

    list<int> a(mylist); // Copy constructor

    cout << "mylist contains:";
    for (int i: mylist)
        cout << ' ' << i;
    cout << '\n';
    // Similarly, we can use pop_back() and pop_front() to remove elements from the list.
    // Erase stl function is used to remove elements from the list.
    mylist.erase(mylist.begin(),mylist.end()); 
    cout << "mylist contains:";
    for (int i: mylist)
        cout << ' ' << i; 
    cout << '\n';
    return 0;
}


// Timr Complexity of List operations
// Operation	Time Complexity
// push_back	O(1)
// push_front	O(1)
// pop_back	O(1)
// pop_front	O(1)
// insert	O(1)
// erase	O(1)
// swap	O(1)
// resize	O(n)
// clear	O(n)
// splice	O(1)
// remove	O(n)
// remove_if	O(n)
// unique	O(n)
// merge	O(n)
// sort	O(n log n)
// reverse	O(n)
