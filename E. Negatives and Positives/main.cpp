#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
void fast()
{   ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}
int32_t main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0,neg=0,mn=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=abs(arr[i]);
            if(arr[i]<0)neg++;
            arr[i]=abs(arr[i]);
            mn=min(mn,arr[i]);
        }
        if(neg%2==0)cout<<sum<<endl;
        else cout<<min(sum,sum-(2*mn))<<endl;

    }


    return 0;
}
