// Priority Queue follows the principle of priority.
// Priority Queue is a container adapter that gives the programmer the functionality of a priority queue - specifically, a first-in first-out (FIFO) data structure where elements are inserted according to a specified comparison criterion.
// Priority Queue is implemented using Heap.
// Priority Queue is a max heap by default.
// The elements of the priority queue are always in non-increasing order (the largest element is always the first element).
// the element removed from the queue is the one with the highest priority.


#include <iostream>
#include <queue>
using namespace std;
int main(){
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int,vector<int> ,greater<int>> mini;

    maxi.push(10);
    maxi.push(30);
    maxi.push(40);
    maxi.push(20);

    cout<<"size of queue is: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i = 0; i <n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop(); 
    }
    cout<<endl;

    mini.push(10);
    mini.push(30);
    mini.push(40);
    mini.push(20);

    cout<<"size of queue is: "<<mini.size()<<endl;
    n = mini.size();
    for(int i = 0; i <n; i++){
        cout<<mini.top()<<" ";
        mini.pop(); 
    }
    cout<<endl;

    cout<<"Empty or not: "<<mini.empty()<<endl;

}


// Time Complexity of Priority Queue operations
// Operation	Time Complexity
// push	O(log n)
// pop	O(log n)
// top	O(1)
// empty	O(1)
// size	O(1)