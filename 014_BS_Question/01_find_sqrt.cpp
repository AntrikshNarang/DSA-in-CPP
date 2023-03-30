#include<iostream>
using namespace std;
int sqrtN(long long int N)
{
    unsigned long long int low = 0, mid , high = N,ans;
        while(low<=high){
            mid = low + (high-low)/2;
            if(mid*mid == N)
            return mid;
            if(mid*mid<N){
                ans = mid;
            low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
}
double morePrecision(int tempAns,int N,int precision){
    double factor = 1;
    double Ans = tempAns;
    for(int i = 0; i < precision; i++){
        factor = factor/10;
        cout<<"factor "<<factor<<endl;
        for(double j = Ans; j * j < N; j=j+factor){
            Ans = j;
            cout<<Ans<<endl;
        }
    }
    return Ans;
}
int main(){
    long long int N;
    cout<<"Enter the value of n: "<<endl;
    cin>>N;
    unsigned long long int tempAns = sqrtN(N);
    double Ans = morePrecision(tempAns,N,3);
    cout<<"The square root of "<<N<<" is "<<Ans<<endl;
    return 0;
}