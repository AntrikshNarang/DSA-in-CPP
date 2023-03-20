#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int binNum,decNum=0,i=0;
    cin>>binNum;
    while(binNum){
        decNum= decNum + (binNum&1)*pow(2,i);
        i++;
        binNum/=10;
    }
    cout<<decNum;
    return 0;
}