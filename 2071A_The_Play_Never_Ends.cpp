#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int ans = (k-1)%3;
        if(ans==0){
                cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
    }
    return 0;
}