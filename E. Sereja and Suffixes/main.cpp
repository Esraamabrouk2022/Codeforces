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
    int n,m;
    cin>>n>>m;
    int arr[n+5],l[n+5];
    map<int,int>mapp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    l[n]=0;
    for(int i=n-1; i>=0; i--)
    {
        if(mapp[arr[i]]==0)
        {
            l[i]=l[i+1]+1;
        }
        else
        {
            l[i]=l[i+1];
        }
        mapp[arr[i]]++;
    }
    while(m--)
    {
        int x;
        cin>>x;
        cout<<l[x-1]<<endl;
    }


    return 0;
}
