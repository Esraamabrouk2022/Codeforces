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
    vector<vector<int>>v;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        int a=n;
        while(n--)
        {
            int k;
            cin>>k;
            vector<int>v1;
            for(int i=0; i<k; i++)
            {
                int x;
                cin>>x;
                m[x]++;
                v1.push_back(x);
            }
            v.push_back(v1);

        }
        bool c=0;
       for(int i=0;i<v.size();i++){
        bool f=0;
        for(auto x:v[i]){
            if(m[x]==1){
                f=1;
                break;
            }
        }
        if(f==0){

            c=1;
            break;
        }

       }
       if(c)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }


    return 0;
}
