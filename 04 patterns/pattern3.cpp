//  1 2 3
//  4 5 6
//  7 8 9
#include<iostream>
using namespace std;
int main(){
    int n,k=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k++ <<" ";
        }
        cout<<endl;
    }
    return 0;
}