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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;
        int num=0;
        vector<char>v;
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }
        for(char i='A'; i<='Z'; i++)
        {
            int x=min(m[i],m[i+32]);
            num+=x;//2
            m[i+32]-=x;//a=2
            m[i]-=x;//A=0
            if(m[i]>=2)v.push_back(i);
            if(m[i+32]>=2)v.push_back(i+32);
        }
        for(int i=0; i<v.size(); i++)
        {
            while(m[v[i]]>=2&&k!=0)
            {
                num++;
                m[v[i]]-=2;
                k--;
            }
            if(k==0)break;
        }
        cout<<num<<endl;
    }

    return 0;
}
