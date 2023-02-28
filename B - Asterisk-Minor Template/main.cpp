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
        string s1,s2;
        cin>>s1>>s2;
        int a=s1.size();
        int b=s2.size();
        if(s1[0]==s2[0])
        {
            cout<<"YES"<<endl;
            cout<<s1[0]<<"*"<<endl;
            //aaaa
            //aaaaaa
        }
        else if(s1[a-1]==s2[b-1])
        {
            cout<<"YES"<<endl;
            cout<<"*"<<s1[a-1]<<endl;
            //aaab
            //zzzb
        }
        else
        {
            bool flag=false;
            for(int i=0; i<a-1; i++)
            {
                for(int j=0; j<b-1; j++)
                {
                    if(s1[i]==s2[j]&&s1[i+1]==s2[j+1])
                    {
                        cout<<"YES"<<endl;
                        cout<<"*"<<s1[i]<<s1[i+1]<<"*"<<endl;
                        flag=true;
                        break;
                    }
                }
                if(flag)break;
            }
            if(!flag)cout<<"NO"<<endl;

        }


    }


    return 0;
}
