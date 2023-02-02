#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
}
#define int long long
int32_t main()
{
    fast();
    int n;
    cin>>n;
    int arr[n];
    int m=LONG_MAX;
    for(int i=0; i<n; i++)cin>>arr[i];
    int prime[15]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=1; i<(1<<15); i++)
    {
        int ans=1;
        bitset<15>b=i;
      //  cout<<b<<endl;
        for(int j=0; j<15; j++)
        {
            if(b[j]==1)
            {
                ans*=prime[j];
            }
        }
        bool flag=1;
        for(int k=0; k<n; k++)
        {
            if(__gcd(arr[k],ans)==1)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            m=min(m,ans);
        }

    }
    cout<<m<<endl;

    return 0;
}
