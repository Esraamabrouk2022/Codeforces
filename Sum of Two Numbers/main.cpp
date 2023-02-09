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
        string s,s1,s2;
        cin>>s;
        int f=0;
        for(int i=0; i<s.size(); i++)
        {
            int a=s[i]-'0';
            if(a%2==0)
            {
                s1+=(a/2)+'0';
                s2+=(a/2)+'0';
            }
            else
            {
                s1+=((a/2)+1-f)+'0';
                s2+=((a/2)+f)+'0';
                f=1-f;
            }
        }
        int a1=stoi(s1);
        int a2=stoi(s2);
        cout<<a1<<" "<<a2<<endl;

    }


    return 0;
}
