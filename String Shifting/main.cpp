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
    string s;
    cin>>s;
    string mi=s,ma=s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        s=s.substr(1)+s[0];
        if(mi>s)
        {
            mi=s;
        }
        if(ma<s)
        {
            ma=s;
        }
    }
    cout<<mi<<endl<<ma;
    return 0;
}
