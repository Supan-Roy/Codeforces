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
        vector<int>a(n+1);
        int count=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==i)
            count++;
        }
        int ans = (count+1)/2;
        if(count==0){
            cout<<0<<endl;
        } else {
            cout<<ans<<endl;
        }
    }
    return 0;
}