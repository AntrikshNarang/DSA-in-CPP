// Queue follows FIFO Principal
// Queue is a container adapter that gives the programmer the functionality of a queue - specifically, a first-in first-out (FIFO) data structure.


#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Hello");
    q.push("World");
    q.push("C++");
    q.push("STL");

    cout<<"size of queue is: "<<q.size()<<endl;
    cout<<"front element is: "<<q.front()<<endl;
    cout<<"back element is: "<<q.back()<<endl;
    q.pop();
    cout<<"size of queue is: "<<q.size()<<endl;
    cout<<"front element is: "<<q.front()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;
    return 0;
}

// Time Complexity of Queue operations
// Operation	Time Complexity
// push	O(1)
// pop	O(1)
// front	O(1)
// back	O(1)
// empty	O(1)
// size	O(1)
