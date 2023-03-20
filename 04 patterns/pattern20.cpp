// 1 1 1 1
//   2 2 2
//     3 3
//       4
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                cout<<i+1;
            }
            else{
                cout<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}