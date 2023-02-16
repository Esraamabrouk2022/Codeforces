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
        int n,k;
        cin>>n>>k;
        int c1=0,c2=0;
        while(n--)
        {
            int l,r;
            cin>>l>>r;
            if(l==k)c1++;
            if(r==k)c2++;
        }
        if(c1>0&&c2>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
