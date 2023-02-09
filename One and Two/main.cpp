#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Fast()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}
/***Esraa***/
int main()
{
    Fast();
    int test;
    cin>>test;
    while(test--)
    {///Esraa
        int n;
        cin>>n;
        int ar[n];
        int ans=1;
        int p[n+5],c=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            ans*=ar[i];
            if(i==0)p[i]=ar[i];
            else
            {
                p[i]=ar[i]*p[i-1];
            }
            if(ar[i]==2)c++;
        }
        if(c%2==1)cout<<-1<<endl;
        else
        {
            int x=c/2;
            int flag=-1;
            for(int i=0; i<n; i++)
            {
                if(ar[i]==2)
                {
                    x--;
                }
                if(x==0)
                {
                    flag=i+1;
                    break;
                }

            }

            cout<<flag<<endl;
        }
    }

    return 0;
}
