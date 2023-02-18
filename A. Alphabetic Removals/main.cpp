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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0; i<n; i++)
    {
        m[s[i]]++;
    }
    for(char i='a'; i<='z'; i++)
    {
        if(m[i]>=k)
        {
            m[i]-=k;
            k=0;
        }
        else
        {
            k-=m[i];
            m[i]=0;
        }
    }
    string str="";
    for(int i=n-1; i>=0; i--)
    {
        if(m[s[i]]!=0)
        {
            str+=s[i];
            m[s[i]]--;
        }
    }
    reverse(str.begin(),str.end());
    cout<<str;


    return 0;
}
