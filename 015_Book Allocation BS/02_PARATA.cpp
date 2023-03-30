#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPossible(long long a[], long long p, long long l, long long mid)
{
    // Approach 1
    int time = 0, noOfParotas = 0;
    for(long long i = 0; i < l; i++){
        time = a[i]; //Since it will take the rank of the cook as the initial time to cook the parata
        int j = 2;
        while(time<=mid){
            noOfParotas++;
            time = time + (a[i]*j);
            j++;
        }
        if(noOfParotas >= p)
        return true;
    }
    return false;
}
long long minTime(long long a[], long long p, long long l)
{
    long long low = 0, mid = 0, high = 1e8, ans = -1;
    high = *max_element(a, a + l) * (p*(p+1))/2;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (isPossible(a, p, l, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    long long t, p, l;
    cin >> t;
    while (t--)
    {
        cin >> p >> l;
        long long a[l];
        for (long long i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        long long time = minTime(a, p, l);
        cout << time << endl;
    }
    return 0;
}


// Approach 2 for isPossible Function

// Approach 2
    // long long noOfParotas = 0;
    // long long tempArr[l];
    // long long mulCount[l];
    // long long time = 0;
    // for (long long i = 0; i < l; i++)
    // {
    //     tempArr[i] = a[i];
    //     mulCount[i] = 1;
    // }
    // for (long long i = 0; noOfParotas < p; i++)
    // {
    //     time++;
    //     if (time > mid)
    //     {
    //         return false;
    //     }
    //     for (long long j = 0; j < l; j++)
    //     {
    //         tempArr[j]--;
    //         if (tempArr[j] == 0)
    //         {
    //             noOfParotas++;
    //             tempArr[j] = ++mulCount[j] * a[j];
    //             if (noOfParotas >= p)
    //             {
    //                 return true;
    //             }
    //         }
    //     }
    // }
    // return noOfParotas >= p;