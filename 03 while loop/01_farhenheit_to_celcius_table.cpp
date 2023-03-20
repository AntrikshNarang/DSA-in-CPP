
//Or Operator - if first condition is true then it does not check the second condition
//And Operator - if first condition is false then it does not check the second condition

#include<iostream>
using namespace std;
int main(){
    int cel = 0;
    float fer;
    while(cel<=100){
        fer=((9/5.0)*cel)+32;
        cout<<cel<<"C : "<<fer<<"F"<<endl;
        cel++;
    }
    return 0;
}