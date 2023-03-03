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
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        priority_queue<int>pq;
        long long ans=0;
        for(int i=0; i<n; i++)cin>>arr[i];
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0&&!pq.empty())
            {
                ans+=pq.top();
                pq.pop();
            }
            else if(arr[i]>0)
            {
                pq.push(arr[i]);
            }

        }
        cout<<ans<<endl;
    }

    return 0;
}
