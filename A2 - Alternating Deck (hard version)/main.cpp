#include <iostream>
#include<bits/stdc++.h>
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
        int a1=0,a2=0,b1=0,b2=0;
        bool f=0;
        a1=1;
        bool x=0;
        int i=2;
        int c;
        while(n>=a1+a2+b1+b2+i)
        {
            if(f)
            {
                c=i;
                while(c--)
                {
                    if(x)a1++;
                    else a2++;
                    x=!x;
                }
                i++;
            }
            else if(!f)
            {
                c=i;
                while(c--)
                {
                    if(x)b1++;
                    else b2++;
                    x=!x;
                }
                i++;
            }

            if(n>=a1+a2+b1+b2+i)
            {
                if(f)
                {
                    c=i;
                    while(c--)
                    {
                        if(x)a1++;
                        else a2++;
                        x=!x;
                    }
                    i++;
                }
                else if(!f)
                {
                    c=i;
                    while(c--)
                    {
                        if(x)b1++;
                        else b2++;
                        x=!x;
                    }
                    i++;
                }
            }
            else break;
            f=!f;
        }
        int z=(n-(a1+a2+b1+b2));
        if(f)
        {
            while(z--)
            {
                if(x)a1++;
                else a2++;
                x=!x;
            }
        }
        else
        {
            while(z--)
            {
                if(x)b1++;
                else b2++;
                x=!x;
            }
        }
        cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl;
    }

    return 0;
}
