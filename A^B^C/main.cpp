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
    fast();
    /*
    int a,b,c;
    cin>>a>>b>>c;
    long long x=1;
    while(c)
    {
        x*=b;
        if(x>=4)
        {
            x%=4;
            x+=4;
        }

        c--;
    }
    a=pow((a%10),x);
  cout<<(a%10)<<endl;
    */
    for(int i=4;i<=15;i++){
        cout<<pow(2,i)<<endl;
    }
    return 0;
}
