#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int ans=0;
        for(int i=0;i<n/2;i++){
            ans+=(a[n-i-1]-a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}