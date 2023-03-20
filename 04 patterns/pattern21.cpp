//       1
//     2 2
//   3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<i+1;
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}