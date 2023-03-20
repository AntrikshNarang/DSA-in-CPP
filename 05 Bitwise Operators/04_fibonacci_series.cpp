// 0 1 1 2 3 5 8 13 21 34 55 89
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int a=0,b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=0;i<n;i++){
        int newNumber = a+b;
        cout<<newNumber<<" ";
        a=b;
        b=newNumber;
    }
    return 0;
}