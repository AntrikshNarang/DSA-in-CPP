// A
// B B
// C C C
// D D D D
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    char ch2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ch2 = ch + i;
            cout<< ch2 << " ";
        }
        cout<<endl;
    }
    return 0;
}