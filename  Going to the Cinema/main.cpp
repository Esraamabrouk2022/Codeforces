#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(NULL);
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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr,arr+n);
        int c=1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<=i)continue;
            else if(!i)c++;
            else if(i-1>=arr[i-1])c++;
        }

            cout<<c<<endl;
    }

    return 0;
}
