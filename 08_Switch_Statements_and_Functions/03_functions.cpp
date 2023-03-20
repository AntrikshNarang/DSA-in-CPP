#include<iostream>
using namespace std;
//To find a number is Even or Not
bool isEven(int num){
    return !(num&1);
}
//To find the factorial of a number
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
//To find the nCr of a number
int nCr(int n,int r){
    int res =fact(n)/(fact(n-r)*fact(r));
    return res;
}
void printCount(int num){
    for(int i=1;i<=num;i++){
        cout<<i<<endl;
    }
}
//To find if a number is Prime
bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
//Find A.P of the function AP = 3n + 7
int ap(int n){
    return 3*n + 7;
}
//Find total number of set bits (number of '1' bits) in a and b combined
int numSetBits(int a,int b){
    int count=0;
    while(a){
        if(a&1)
        count++;
        a>>=1;
    }
    while(b){
        if(b&1)
        count++;
        b>>=1;
    }
    return count;
}
//Find nth Fibonacci number
int fibonacci(int num){
    if(num==1)
    return 0;
    if(num==2)
    return 1;
    int a=0,b=1,fib=1;
    for(int i=0;i<=num-2;i++){
        fib=a+b;
        a=b;
        b=fib;
    }
    return fib;
}
int main(){
    cout<<fibonacci(10);
    return 0;
}