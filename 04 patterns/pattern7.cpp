// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}