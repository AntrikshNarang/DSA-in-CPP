// 1234
//  234
//   34
//    4

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            int count = 1;
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<i+(count++);
            }
        }
        // for(int j=0;j<i;j++){
        //         cout<<" ";
        // }
        // for(int j=i;j<n;j++){
        //     cout<<j+1;
        // }
        cout<<endl;
    }
    return 0;
    }