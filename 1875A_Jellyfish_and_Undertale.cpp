#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long a, b, n;
        cin>>a>>b>>n;
        vector<long long>s(n);
        for(int i=0;i<n;i++){
                cin>>s[i];
        }
        long long ans=b;
        for(int i=0;i<n;i++){
                int ct=min(s[i], a-1);
                ans+=ct;
        }
        cout<<ans<<endl;
    }
    return 0;
}