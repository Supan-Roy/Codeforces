#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int y,w;
    cin>>y>>w;
    int Max = max(y,w);
    int ans = 6-Max+1;
    int gcd = __gcd(ans, 6);
    if(ans<=0){
        cout<<"0/1"<<endl;
    }
    else if(ans==0){
        cout<<"1/1"<<endl;
    }
    else{
        cout<<ans/gcd<<"/"<<6/gcd<<endl;
    }
    return 0;
}