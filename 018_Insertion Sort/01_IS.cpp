// Adaptable Algorithm + Stable Algorithm (Both Bubble Sort and Insertion Sort are Stable)
// An algorithm is said to be adaptive if it becomes more efficient when the input data is already nearly sorted.
// A stable sorting algorithm maintains the relative order of items with equal sort keys. For example, if you have two items with the same value in an array, a stable sorting algorithm will keep them in their original order. On the other hand, an unstable sorting algorithm may swap their positions.
#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr, int n)
{
    // Using While Loop
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i], j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }
    // With For Loop
    // for (int i = 1; i < n; i++)
    // {
    //     int temp = arr[i], j;
    //     for (j = i - 1; j >= 0; j--)
    //     {
    //         if (arr[j] > temp)
    //         {
    //             // Shift
    //             arr[j + 1] = arr[j];
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     arr[j + 1] = temp;
    // }
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
    insertionSort(arr, n);
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