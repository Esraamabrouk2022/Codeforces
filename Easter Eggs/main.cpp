#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast(){
cin.tie(0);
cout.tie(0);
}
int main()
{

    string s="VBIROYG";
    int n;
    cin>>n;
    n-=7;
    string x="ROYG";
    while(n>=4){
        s+=x;
        n-=4;
    }
    for(int i=0;i<n;i++){
        s+=x[i];
    }
    cout<<s;
    return 0;
}
