//Default Case & breaks are not Mandatory in Switch
//Parameters in switch can only be int and char

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    switch(a*2){
        case 10:
        cout<<"Hello";
        break;
        case 20:
        cout<<"Hey There";
        exit(0);
        break;
        default: cout<<"Default";
    }
    return 0;
}