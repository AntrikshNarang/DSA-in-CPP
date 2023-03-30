//Binary search works on a monotonous set of numbers
#include <iostream>
using namespace std;
int binarySearch(int arr[], int key, int size)
{
    int low = 0, high = size - 1, mid;
    // mid = (low + high) / 2; Not Preferred
    // Reason -> for bigger values of low and high we cannot get the desired output, Example:- if low = 2^31 - 5 and high = 2^31 - 2, their sum would be Greater than (int) size in CPP
    // Better Approach
    mid = low + (high - low) / 2;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[7] = {1, 5, 7, 10, 23, 52, 87};
    int key = 5;
    int index = binarySearch(arr, key, 7);
    if (index == -1)
        cout << "Not found" << endl;
    else
        cout << "Found at index " << index << endl;
    return 0;
}

// Time Complexity of Algorithms on the basis of the Given Constraints:-
// Time Complexity of Binary Search:
// O(log n)
// Time Complexity of Linear Search:
// O(n)

// For Getting the Desired value the Worst we can get for an array of size 1000 is 10 iterations.
//  N/2
//  N/4
//  N/8
//  N/16 ... goes on until only one value is left
// i.e. N/2^K = 1 (Where 1 is the Desired Value)
//  => N = 2^K or K = Log N