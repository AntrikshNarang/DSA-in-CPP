//Code is Working fine in online c compiler (use ans variable as float instead of int because pow function returns a floating point number)

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,bit,i=0,negAns[32];
    float ans=0;
    cin>>num;
    //For Positive Number
    if(num>=0){
    while(num!=0){
        bit = (num&1);
        ans = (pow(10,i++)*bit) + ans;
        num>>=1;
    }
    cout<<ans;
    }
    //For Negative Number
    else{
        //Converting to positive and finding binary
        num*=-1;
        while(num!=0){
        bit = (num&1);
        ans = (pow(10,i++)*bit) + ans;
        num>>=1;
    }
        num=ans; 
        //storing indivdual digit values in array and finding 2's Complement
        for(int i=31;i>=0;i--){
            if(num){
                negAns[i]=num&1;
                num/=10;
            }
            else{
                negAns[i]=0;
            }
        }
        //For converting to 2's Complement
        bool firstOne = true;
        for(i=31;i>=0;i--){
            //Wait until the first one comes
            if(firstOne){
                if(negAns[i]){
                    firstOne=false;
                }
            }
            //Then negate all other digits 
            else{
                    negAns[i]=!negAns[i];
                }
        }
        for(i=0;i<32;i++){
            cout<<negAns[i];
        }
    }
    return 0;
}



/*

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,bit,i=0;
    float ans=0,negAns=0;
    cin>>num;
    //For Positive Number
    if(num>=0){
    while(num!=0){
        bit = (num&1);
        ans = (pow(10,i++)*bit) + ans;
        num>>=1;
    }
    }
    //For Negative Number
    else{
        num = num*(-1);
        while(num!=0){
        bit = (num&1);
        ans = bit * pow(10,i++) + ans; 
        num>>=1;
        }
        //Finding 1's Complement
        i=0;
        num=ans;
        while(num){
        cout<<num<<endl;
            if(num&1){
                negAns = pow(10,i) * 0 + negAns;
            }
            else{
                negAns = pow(10,i) * 1 + negAns;
            }
            num/=10;
            i++;
        }
        negAns = pow(10,i) * 1 + negAns;
        //Finding 2's Complement
        
        ans=negAns;
    }
    cout<<ans;
    return 0;
}
*/