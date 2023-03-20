// 100,50,20,1 Rupee Notes
#include <iostream>
using namespace std;
int main()
{
    int hundred, fifty, twenty, one, num;
    cout << "Enter the  value of n: " << endl;
    cin >> num;
    switch (1)
    {
    case 1:
    hundred=num/100;
    cout<<"Number of hundred rupee notes is "<<hundred<<endl;
    num%=100;
    case 2:
    fifty=num/50;
    cout<<"Number of fifty rupee notes is "<<fifty<<endl;
    num%=50;
    case 3:
    twenty=num/20;
    cout<<"Number of twenty rupee notes is "<<twenty<<endl;
    num%=20;
    case 4:
    one=num;
    cout<<"Number of one rupee notes is "<<one<<endl;
    }
    return 0;
}