#include <iostream>
#include <climits>
using namespace std;
int getMax(int arr[], int size)
{
    int MAX = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        MAX = max(MAX, arr[i]);
        // if (arr[i] > max)
        //     max = arr[i];
    }
    return MAX;
}
int getMin(int arr[], int size)
{
    int MIN = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        MIN = min(MIN, arr[i]);
        // if (arr[i] < min)
        //     min = arr[i];
    }
    return MIN;
}
int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i + 1;
        }
    }
    return 0;
}
void revArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    //Apporach 2
    int start = 0,end = size - 1;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Max Element of Array is " << getMax(arr, size) << endl;
    cout << "Min Element of Array is " << getMin(arr, size) << endl;
    cout << "Sum of Array is " << getSum(arr, size) << endl;
    int pos = linearSearch(arr, size, 10);
    if (pos)
    {
        cout << "Element is found at position " << pos << endl;
    }
    else
    {
        cout << "Element is not Present in the Array" << endl;
    }
    revArray(arr, size);
    cout << "Reversed Array is ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}