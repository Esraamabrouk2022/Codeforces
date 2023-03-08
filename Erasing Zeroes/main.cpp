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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int p1=0,p2=0,c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                p1=i;
                break;
            }
        }
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                p2=i;
                break;
            }
        }

        for(int i=p1; i<p2; i++)
        {
            if(s[i]=='0')c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
