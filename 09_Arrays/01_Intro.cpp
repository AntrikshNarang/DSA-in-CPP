//Array - Collection of Elements at contigous memory Locations
//arr[10] is a array of size 10 where arr points to the address of the first element of the array
#include<iostream>
using namespace std;
void printArray(int arr[],int num){
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
}
int main(){
    //Array initialized with 0 i.e. all elements will be zero
    int arr[10]={0};
    cout<<"arr is"<<endl;
    printArray(arr,10);
    //Array initialized with 1 i.e. all elements will be zero except the first
    int arr2[10] = {1}; 
    cout<<"arr2 is"<<endl;
    printArray(arr2,10);
    int arr3[10];
    //Array filled with 5 at all Indexes - syntax of fill_n(arr.begin(),till_index,value_to_be_stored)
    fill_n(arr3, 10, 5);
    cout<<"arr3 is"<<endl;
    printArray(arr3,10);
    int arr4[10];
    //Array filled with 9 at all Indexes - syntax of fill(arr.begin(),arr.end() or address of an index,value_to_be_stored)
    fill(arr4, arr4+10, 9);
    cout<<"arr4 is"<<endl;
    printArray(arr4,10);

    char ch[5] = {'a','e','i','o','u'};
    for(int i=0;i<5;i++){
        cout<<ch[i];
    }
    cout<<endl;

    //Never Prefer Variable Sized arrays like array[num] -> array[10000] is still a better Practice
    return 0;
}