#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        if(n>2){
            n-=2;
            int ans = (n+x-1)/x+1;
            cout<<ans<<endl;
            
        }else {
            cout<<1<<endl;
        }
    }
    return 0;
}