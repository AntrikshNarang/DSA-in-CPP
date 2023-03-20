// for(initialization;condition;updation)
// all the three arguments are optional
// example - for(int i=0;i<n;i++)
#include<iostream>
using namespace std;
int main(){
    cout<<"With all Arguments"<<endl;
    for(int i=0;i<5;i++){
        cout<<i<<endl;
    }
    cout<<"Without initialization"<<endl;
    int j=0;
    for(;j<5;j++){
        cout<<j<<endl;
    }
    cout<<"Without updation"<<endl;
    int k=0;
    for(;k<5;){
        cout<<k<<endl;
        k++;
    }
    cout<<"Without condition"<<endl;
    int m=0;
    for(;;){
        if(m<5){
            cout<<m<<endl;
        }
        else{
            break;
            //Break brings you of the current Loop
        }
        m++;
    }
    cout<<"For loop with multiple arguments"<<endl;
    for(int a=0,b=1;a<=3 && b<=5;++a , b++){
        cout<<"a : "<<a<<endl<<"b : "<<b<<endl<<endl;
    }
    return 0;
}