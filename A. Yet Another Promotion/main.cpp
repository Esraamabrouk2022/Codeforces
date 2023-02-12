#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
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
        long long a,b,n,m;
        cin>>a>>b>>n>>m;
        long long x=(n/(m+1));
        int z=(n%(m+1));
        long long ans1=0,ans2=0;
        if(z==0)
        {
            ans1=m*a*x;
            //cout<<"GG";
        }
        else
        {
            ans1=(x*a*m);
            long long u=min(z*a,z*b);
            ans1+=u;
        }
        ans2=min(a*n,b*n);
       // cout<<ans1<<" "<<ans2<<endl;
        if(ans1<ans2)cout<<ans1;
        else cout<<ans2;
        cout<<endl;
    }
    return 0;
}
