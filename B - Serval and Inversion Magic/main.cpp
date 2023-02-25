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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0,r=n-1;
        //10010
        //l=0 ,r=4
        //s[0]=1 s[4]=0
        //1001
        //
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                break;
            }
            else if(s[l]==s[r])
            {
                l++;
                r--;
            }
        }
        while(l<=r)
        {
            if(s[l]==s[r])break;
            else
            {
                s[l]=s[r];
                l++;
                r--;
            }
        }
        string x=s;
        reverse(x.begin(),x.end());
        if(s==x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
