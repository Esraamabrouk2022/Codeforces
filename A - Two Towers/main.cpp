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
        int n1,m;
        cin>>n1>>m;
        string s1,s2;
        cin>>s1>>s2;
        string a=s1,b=s2;
        reverse(a.begin(),a.end());//reverse s1
        reverse(b.begin(),b.end());//reverse s2
        string str1=s1+b;
        string str2=s2+a;
        int c1=0,c2=0;
        for(int i=0; i<str1.size()-1; i++)
        {
            if(str1[i]==str1[i+1])c1++;
            if(str2[i]==str2[i+1])c2++;
        }
        if(c1<=1||c2<=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
