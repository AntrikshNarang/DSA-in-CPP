// A A A
// B B B
// C C C
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    for(int i=0;i<n;i++){
        char ch2 = ch + i;
        for(int j=0;j<n;j++){
            cout<< ch2 << " ";
        }
        cout<<endl;
    }
    return 0;
}