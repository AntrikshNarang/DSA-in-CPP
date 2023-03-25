#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void printArr(int arr[],int size){
    for(int i = 0;i< size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int a = 6, b = 10;
    // cout<<"A is"<<a<<" "<<"B is "<<b<<endl;
    // swap(a,b);
    // cout<<"A is"<<a<<" "<<"B is "<<b<<endl;
    int size;
    cin>>size;
    int arr[100];
    int temp;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(i%2){
            swap(arr[i],arr[i-1]);
        }
    }
    printArr(arr,size);
    return 0;
}