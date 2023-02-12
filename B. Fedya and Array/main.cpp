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
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=m; i<n; i++)v.push_back(i);
        for(int i=n; i>m; i--)v.push_back(i);
        cout<<v.size()<<endl;
        for(auto i:v)cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}
