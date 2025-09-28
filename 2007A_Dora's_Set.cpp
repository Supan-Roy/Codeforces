#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        if(l%2==0) l++;
        int ans=0;
        if(abs(l-r)>=2){
                while(l+2<=r){
                        ans++;
                        l+=4;
                }
        }
        cout<<ans<<endl;
    }
    return 0;
}