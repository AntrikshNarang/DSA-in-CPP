#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Hello");
    s.push("World");
    s.push("C++");
    s.push("STL");

    cout<<"size of stack is: "<<s.size()<<endl;
    cout<<"top element is: "<<s.top()<<endl;
    s.pop();
    cout<<"top element is: "<<s.top()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
    return 0;
}

// Time Complexity of Stack operations
// Operation	Time Complexity
// push	O(1)
// pop	O(1)
// top	O(1)
// empty	O(1)
// size	O(1)
