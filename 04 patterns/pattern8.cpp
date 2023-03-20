// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1


//Approach 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value = i;
        for(int j=0;j<=i;j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Approach 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value = i;
//         for(int j=0;j<=i;j++){
//             cout<<1+value--<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

