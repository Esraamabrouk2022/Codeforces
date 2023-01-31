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
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;//2
        int a=x+(x/2); //2+1=3
        int b=x/2;//1
        if(x%2!=0)cout<<-1<<endl;
        else {
            if((a^b)==x)cout<<a<<" "<<b<<endl;
            else cout<<-1<<endl;
        }

    }

    return 0;
}
