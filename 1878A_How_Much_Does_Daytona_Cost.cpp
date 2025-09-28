#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>a(n);
        int count=0;
        for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]==k){
                        count++;
                }
        }
        if(count>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}