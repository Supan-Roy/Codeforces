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
        int ans = 1;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>1){
                ans = 0;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
    }
    return 0;
}