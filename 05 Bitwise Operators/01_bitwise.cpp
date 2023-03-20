// AND Operator - & (a=2,b=3) a&b (10&11) = 10 (2) Ans
// OR Operator - | (a=2,b=3) a|b (10|11) = 11 (3) Ans
// XOR Operator - ^ (a=2,b=3) a^b (10^11) = 01 (1) Ans
// NOT Operator - ~ (a=2) ~a (~10) = 01 (1) Ans
#include<iostream>
using namespace std;
int main(){
    int a = 2, b = 3;
    cout << "a = " << a << " b = " << b << endl;
    cout << "a&b = " << (a&b) << endl;
    cout << "a|b = " << (a|b) << endl;
    cout << "a^b = " << (a^b) << endl;
    cout << "~a = " << (~a) << endl;
    return 0;
}

//For any number, if we and it with 1 and if it returns 1 then it is an odd number else an even number
// if(a&1==1) { odd number } else if (a&1==0){ even number }