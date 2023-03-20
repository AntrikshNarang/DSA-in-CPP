//Variable Scope
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "Value of a is " << a << endl;
    {
        int a = 20;
        cout << "Value of a is " << a << endl;
    }
    cout << "Value of a is " << a << endl;

    int i=8;
    for(int i=3;i<10;i++){
        cout<<i<<endl;
    }
    cout<<i<<endl;

    //The code below doesn't return an error because b is initialized in block scope
    if(1){
        int b;
        if(1){
            int b;
            if(1){
                int b;
                if(1){
                    int b;
                }
            }
        }
    }
    
    return 0;
}