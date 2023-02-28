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
    int t;
    cin>>t;
    string str="";
    int x=1;
    while(str.size()<100)
    {
        if(x%3==0)str+='F';
        if(x%5==0)str+='B';
        x++;
        //FBFFB
    }//BBB
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(str.find(s)!=-1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }


    return 0;
}

