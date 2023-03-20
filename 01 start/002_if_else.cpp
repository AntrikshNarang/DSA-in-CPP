#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='A' && a<='Z'){
        cout<<"Uppercase";
    }
    else if(a>='a' && a<='z'){
        cout<<"lowercase";
    }
    else if(a>='0' && a<='9'){
        cout<<"numeric value";
    }
    else{
        cout<<"wrong input";
    }
    return 0;
}

//sum = n/2(a+l) where n is total number of elements, a is the first element and l is the last element
//for a sum of 1 to 100... sum = 100/2(1+100)