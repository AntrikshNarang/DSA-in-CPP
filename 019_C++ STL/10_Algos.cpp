// Algorithms in STL

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int> a = {1,3,5,7,9,2,4,6,8,10};
    sort(a.begin(), a.end());
    // Sort uses the IntroSort algorithm which is a combination of QuickSort, HeapSort and Insertion Sort
    for(int i : a){
        cout<<i<<" ";
    }
    cout<<"Element Present or Not? : "<<binary_search(a.begin(), a.end(), 5)<<endl;

    cout<<"Lower Bound of 5 is: "<<lower_bound(a.begin(), a.end(), 5) - a.begin()<<endl;
    cout<<"Upper Bound of 5 is: "<<upper_bound(a.begin(), a.end(), 5) - a.begin()<<endl;

    int c = 3, b= 5;
    cout<<"max of 3 and 5 is: "<< max(c,b)<<endl;
    cout<<"min of 3 and 5 is: "<< min(c,b)<<endl;
    cout<<"Before swap: "<<c<<" "<<b<<endl;
    swap(c,b);
    cout<<"After swap: "<<c<<" "<<b<<endl;
    
    
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"Reverse of abcd is: "<<abcd<<endl;

    vector<int> v = { 1 ,3 , 5 ,7 };
    cout<<"Before rotate: ";
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    rotate(v.begin(), v.begin()+2, v.end());
    cout<<"After rotate: ";
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    
    return 0;
}

// lower_bound returns an iterator pointing to the first element in a sorted range that is not less than a specified value. If the specified value is present in the range, lower_bound returns an iterator pointing to the first occurrence of that value. If the specified value is not present in the range, lower_bound returns an iterator pointing to the first element that is greater than the specified value.

// upper_bound returns an iterator pointing to the first element in a sorted range that is greater than a specified value. If the specified value is present in the range, upper_bound returns an iterator pointing to the element immediately after the last occurrence of that value. If the specified value is not present in the range, upper_bound returns an iterator pointing to the first element that is greater than the specified value.