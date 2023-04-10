// A set is a container that stores unique elements following a specific order.
// In a set, the value of an element also identifies it (the value is itself the key, of original type), and each value must be unique.
// The value of the elements in a set cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.
// Internally, the elements in a set are always sorted following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).
// Sets are typically implemented as binary search trees.

// Unordered sets are containers that store unique elements formed by the combination of the value of an element and a hash value based on this value, and which allows for fast retrieval of individual elements based on their values.
// In an unordered_set, the value of an element also identifies it (the value is itself the key, of original type), and each value must be unique.
// The value of the elements in an unordered_set cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.
// Internally, the elements in the unordered_set are not sorted in any particular order, but organized into buckets depending on their hash values to allow for fast access to individual elements directly by their values (with a constant average time complexity on average).
// Unordered sets are typically implemented as hash tables, that is, by combining the functionality of a hash function with a certain kind of container that allows for fast retrieval of individual elements based on their values (e.g., a binary search tree or a hash table).
// They are faster than sets in terms of insertion and removal of elements, although they are generally less efficient for range iteration through a subset of their elements.


#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    set<int>::iterator itt = s.find(2);
    s.erase(itt);
    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;

    // cout<<"2 is present or Not??? -> "<<s.count(2)<<endl;
    // cout<<"5 is present or Not??? -> "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(5);
    s.insert(6);

    cout<<"value at itr -> "<<s.count(*itr)<<endl;

    for(auto i = itr; i != s.end(); i++){
        cout << *i << " ";
    }
    cout<<endl;
    return 0;
}

// Time Complexity of Set operations
// Operation	Time Complexity
// insert	O(log n)
// erase	O(log n)
// find	O(log n)
// count	O(log n)
// lower_bound	O(log n)
// upper_bound	O(log n)

// Time Complexity of Unordered Set operations
// Operation	Time Complexity
// insert	O(1) on average
// erase	O(1) on average
// find	O(1) on average
// count	O(1) on average
// lower_bound	O(1) on average
// upper_bound	O(1) on average
