#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Fast()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    Fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)cout<<"NO"<<endl;
        else
        {   cout<<"YES"<<endl;
            int ans=n*2;
            vector<pair<int,int>>v;
            for(int i=1; i<=n; i+=2)
            {
                v.push_back({i,ans--});
            }
            for(int i=2; i<=n*2; i+=2)
            {
                v.push_back({i,ans--});
            }
            for(int i=0; i<n; i++)
            {
                cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }

    }


    return 0;
}
