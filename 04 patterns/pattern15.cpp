// A
// B C
// C D E
// D E F G
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    char ch2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ch2 = ch + i +j;
            cout<< ch2 << " ";
        }
        cout<<endl;
    }
    return 0;
}