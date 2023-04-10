// Map is a associative container that stores elements in key value combination where key should be unique, otherwise it overrides the previous value.
// It is usually implemented using Self-Balancing Binary Search Tree (AVL / Red Black Tree) like set.
// It is generally used where we need to quickly retrieve the data by its key (Search, Delete, Modify)

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    // key value pairs are inserted in sorted order of keys
    m[1] = "abc";
    m[4] = "jkl";
    m[3] = "ghi";
    m[2] = "def";
    m[13] = "mno";
    m.insert({5, "pqr"});
    // elements are printed in sorted order of keys, unlike unordered map
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // count() returns 1 if the key is found
    if (m.count(5))
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    cout << "before erase -> " << m.size() << endl;
    // erase() removes the element with the given key
    m.erase(3);
    cout << "after erase -> " << m.size() << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;
    // find() returns an iterator to the element if the key is found, else it returns m.end()
    auto it = m.find(2);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << ' ' << (*i).second << endl;
    }
    return 0;
}

// Time Complexity of Map operations
// Operation	Time Complexity
// insert	O(log n)
// erase	O(log n)
// find	O(log n)
// count	O(log n)
// lower_bound	O(log n)
// upper_bound	O(log n)

// Time Complexity of Unordered Map operations -> ( However, in the worst case, the time complexity can be O(n) due to hash collisions.)
// Operation	Time Complexity
// insert	O(1) on average
// erase	O(1) on average
// find	O(1) on average
// count	O(1) on average
// lower_bound	O(1) on average
// upper_bound	O(1) on average