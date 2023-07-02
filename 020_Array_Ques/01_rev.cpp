#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int start = 0, end = v.size() - 1;
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}
void printArr(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArr(v);
    vector<int> a = reverse(v);
    printArr(a);
    return 0;
}