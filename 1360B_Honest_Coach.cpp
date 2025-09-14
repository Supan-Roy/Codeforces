#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
                cin>>a[i];
        }
        sort(a.begin(), a.end());
        int ans = INT_MAX;
        for(int j=1;j<n;j++){
                ans=min(ans, a[j] - a[j-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}