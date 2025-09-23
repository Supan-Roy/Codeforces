#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;i++){
                cin>>a[i];
                sum+=a[i];
        }
        int ans = ((sum+n)-1)/n;
        cout<<ans<<endl;
    }
    return 0;
}