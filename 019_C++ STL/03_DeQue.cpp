// Deque stores data in multiple chunks of memory
// Deque is a double ended queue
// Deque is a dynamic array
// Deque is a combination of vector and list
// Write a program for implementing deque stl in cpp
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> mydeque;
    mydeque.push_back(1);
    mydeque.push_back(2);
    mydeque.push_front(3);
    mydeque.push_front(4);

    cout << "mydeque contains:";
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
    // Similarly, we can use pop_back() and pop_front() to remove elements from the deque.
    // We can also use insert() and erase() functions to insert and remove elements from the deque. -> mydeque.erase(d.begin(),d.begin+5); // remove first 5 elements
    // We can also use at() function to access elements of the deque.
    // We can also use front() and back() functions to access the first and last elements of the deque.
    // We can also use size() and max_size() functions to get the size and maximum size of the deque.
    return 0;
}

// Time Complexity of Deque operations
// Operation	Time Complexity
// push_back	O(1)
// push_front	O(1)
// pop_back	O(1)
// pop_front	O(1)
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
