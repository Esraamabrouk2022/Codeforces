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
    string a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
        int n=a.size();
        bool flag=1;
        for(int i=0; i<n; i++)
        {
            if(a[i]==b[i]&&c[i]!=b[i])flag=0;
            if(a[i]!=b[i]&&c[i]==b[i])swap(c[i],a[i]);
            if(a[i]!=b[i]&&c[i]==a[i])swap(c[i],b[i]);
        }
        if(!flag||a!=b)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;
}
