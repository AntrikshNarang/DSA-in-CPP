//Call by Reference
#include<iostream>
using namespace std;
void updateArr(int arr[],int size){
    cout<<"Array inside Function"<<endl;
    for(int i=0;i<3;i++){
        arr[i]*=3;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3]={1,2,3};
    cout<<"Original Array"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    updateArr(arr,3);
    cout<<"Array outside Function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}