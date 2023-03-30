#include<iostream>
using namespace std;
bool isPossible(long long arr[],long long n, long long m, long long mid){
    long long woodLength = 0;
    for(long long i = 0; i < n; i++){
        if(mid < arr[i])
        woodLength += arr[i] - mid;
    }
    return woodLength >= m;
}
long long getHeight(long long arr[],long long n, long long m){
    long long low = 0, mid = 0, high = 0, ans = -1;
    for(long long i = 0; i < n; i++){
        max(high,arr[i]);
    }
    while(low<=high){
        mid = low + (high-low)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int main(){
    // n is the number of trees, and m is the wood Required
    long long n, m;
    cin>>n>>m;
    long long arr[n] = {0};
    for(long long i = 0; i < n; i++){
        cin>>arr[i];
    }
    long long height = getHeight(arr,n,m);
    cout<<height;
    return 0;
}