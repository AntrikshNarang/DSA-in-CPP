// A B C
// A B C
// A B C
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    char ch2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ch2 = ch + j;
            cout<< ch2 << " ";
        }
        cout<<endl;
    }
    return 0;
}