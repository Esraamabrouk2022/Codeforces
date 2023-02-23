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
    int n;
    cin>>n;
    int arr[n];
    map<int,int >m;
    vector<int>v;
    int ma=-1;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(m[arr[i]]==0)
        {
            v.push_back(arr[i]);
        }
        m[arr[i]]++;
        ma=max(ma,m[arr[i]]);
    }
    sort(v.begin(),v.end());
    while(ma--)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(m[v[i]]>0)
            {
                cout<<v[i]<<" ";
                m[v[i]]--;
            }
        }
        cout<<endl;

    }


    return 0;
}
