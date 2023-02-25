#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int gcd=INT_MAX;
        for(int i=0; i<n; i++)cin>>arr[i];
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                gcd=min(gcd,__gcd(arr[i],arr[j]));
            }
        }
        if(gcd<=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
