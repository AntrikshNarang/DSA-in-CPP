//Left Shift Operator << 5 (000101) -> 5>>2 -> (010100) //Multiply by 2
//Right Shift Operator >> 5 (000101) -> 5>>2 -> (000001) //Divide by 2
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    cout<<"LS: a<<2 is : "<<(a<<2)<<endl; // a*4
    cout<<"RS: a>>2 is : "<<(a>>2)<<endl; // a/4
    return 0;
}
//shifting a positive number to its left side may make it a negative number if significant digit becomes 1