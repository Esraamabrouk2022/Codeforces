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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n-1;
    for(int i=2;i<s.size();i++){
        if(s[i]==s[i-2])ans--;
    }
    cout<<ans<<endl;
   }

    return 0;
}
