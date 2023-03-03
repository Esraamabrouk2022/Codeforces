#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
}
string s;
int n;
bool solve(string s)
{
    int x=0;

    while(x<n&&s[x]=='m')
    {
        x++;
    }
    if(x==0)return false;
    while(x<n&&s[x]=='e')
    {
        x++;
    }
    if(x<=1)return false;
    while(x<n&&s[x]=='o')
    {
        x++;
    }
    if(x<=2)return false;
    while(x<n&&s[x]=='w')
    {
        x++;
    }
    if(x<s.size())return false;

    return true;
}
int main()
{
    fast();
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
   // cout<<s<<endl;
        if(solve(s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
