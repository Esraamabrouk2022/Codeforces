#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}
const int N=100005;
int fr[N];
int main()
{
    fast();
    int n;
    cin>>n;
    int arr[n*2];
    int c=0,m=INT_MIN;
    for(int i=0; i<n*2; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n*2; i++)
    {
        fr[arr[i]]++;
        //2 1 1 3 2 3
        //1 1 2 1 2 2
        if(fr[arr[i]]==2)c--;
        else c++;
        m=max(m,c);
    }
    cout<<m;

    return 0;
}
