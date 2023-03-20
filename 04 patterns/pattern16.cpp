// D
// C D
// B C D
// A B C D

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    char ch2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ch2 = ch + n - i + j - 1;
            cout<<ch2<<" ";
        }
        cout<<endl;
    }
    return 0;
}