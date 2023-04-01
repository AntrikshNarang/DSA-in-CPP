// Each Round takes the largest element to the last possible space - ith round takes the ith largest to the right place 
// **In-place sorting refers to sorting algorithms that use a constant amount of extra space for producing the output. This means that the sorted items occupy the same storage as the original ones. Some examples of in-place sorting algorithms are Bubble sort, Selection Sort, Insertion Sort, and Heapsort.
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
    // Approach 1 - More Efficient as it requires fewer swaps on Average
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
                swapped = true;
        }
        if(!swapped)
        break;
    }
    // Approach 2
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }
}
void printArr(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArr(arr, n);
    bubbleSort(arr, n);
    printArr(arr, n);
    return 0;
}

// Time Complexity ->

// First Round -> (n - 1) comparisons
// Second Round -> (n - 2) comparisons
// .
// .
// .
// ( n - ith ) Round -> 1 comparison

// T.C => 1 + 2 + 3 + . . . + (n - 2) + (n - 1) = n ( n - 1) / 2 = O (n^2)

// Best Case: O(n) since only (n-1) comparisons
// Worst Case: O(n^2) 

// Space Complexity -> O(1)


// ** In Place Sorting
// In-place sorting is a way to sort a list of items without using much extra space. Imagine you have a deck of cards and you want to sort them in ascending order. One way to do this would be to take another empty deck and start placing the cards in order one by one. This would require an extra deck of cards, which takes up space.

// In-place sorting is like sorting the deck of cards without using another deck. You would rearrange the cards within the same deck until they are in the right order. This way, you don’t need any extra space (or just a little bit) to sort the cards.

// In computer science, this concept is applied to sorting algorithms. In-place sorting algorithms rearrange the items within the same list or array until they are in the right order. This saves space because you don’t need to create a new list or array to store the sorted items.