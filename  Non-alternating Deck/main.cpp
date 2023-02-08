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
        int a=0,b=0;
        bool f=0;
        a=1;
        int i=2;
        while(n>=a+b+i)
        {
            if(f)
            {
                a+=i;
                i++;
            }
            else if(!f)
            {
                b+=i;
                i++;
            }

            if(n>=a+b+i)
            {
                if(f)
                {
                    a+=i;
                    i++;
                }
                else if(!f)
                {
                    b+=i;
                    i++;
                }
            } else break;
            f=!f;
        }
        if(f)
        {
            a+=(n-(a+b));
        }
        else
        {
            b+=(n-(a+b));
        }
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}
