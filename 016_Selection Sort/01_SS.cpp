// Each Round takes the min element and swaps it to the first place of the subarray
#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
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
    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}

// Space Complexity -> O(1) -> Since Only Variables are made 

// Time Complexity -> O(n^2)

// Let's Take an Example
// if we have an array of size 5
// { a, b, c, d, e} - for i = 0, we do (n-1) i.e. 4 comparisons
// { a, b, c, d, e} - for i = 1, we do (n-2) i.e. 3 comparisons
// .
// .
// so on upto i = (n-2) when we perform 1 comparison

// i.e. 1 + 2 + 3 + . . . + ( n -2 ) + ( n - 1 ) = n (n - 1) / 2 = (n^2 - n)/2 = O(n^2)

// Best Case Complexity (already Sorted) => O(n^2)
// Worst Case Complexity (not Sorted) => O(n^2)


// Use Case -> array / vector / list with small Size, then selection sort is used where memory constraints are present