#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
}
const int N=100005;
char fr[N];
int main()
{
    fast();
    string s1,s2;
    bool flag=1;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0; i<s1.size(); i++)
    {
        fr[s1[i]]++;
    }
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]==' '||fr[s2[i]])fr[s2[i]]--;
        else flag=0;

    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
