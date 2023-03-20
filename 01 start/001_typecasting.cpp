#include<iostream>
using namespace std;
int main(){
    int a = 'a';
    char b = 98;
    cout<<"Value of A is "<<a<<endl<<"Value of b is "<<b<<endl;
    char ch = 123456; //since charcters take one byte of storage, they can store only upto 2^8 numbers, a number greater than that will automatically get converted to 2^8 i.e. 64 which signifies @ in ascii Table
    cout<<"Value of ch is "<<ch<<endl;
    cout<<"Dividing 2/5 gives "<<2/5<<endl; //prints 0 instead of 0.4 Because int/int gives an integer(int) output

    int num1 = 3, num2 =4;
    bool first = (num1>num2); 
    
    //Relational Operator : Gives 1 on True and 0 on False
    // (a==b) | (a!=b) | (a<b) | (a>b) | (a>=b) | (a<=b)
    cout << "Is num1 > num2? "<<first << endl << "Is Num 1 < num2? "<< (num1<num2);
    // int a = cin.get();    
    // 'cin.get()' function also takes ' ' (space) '\t' '\n' as input and stores them as there ascii value

    //Logical Operators
    // && (and) : Requires both conditions to be true
    // || (or) : Requires anyone condition to be true
    // ! (not) : Negates the Given Condition - (true -> False) (False -> true) (23 -> 0) (0 -> 1)
    return 0;
}