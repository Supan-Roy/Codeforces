#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin>>n>>k;
    vector<int>ans;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_set<int>seen;
    for(int i=0;i<n;i++){
        if(seen.count(a[i])==0){
            seen.insert(a[i]);
            ans.push_back(i+1);
        }
    }
    if(ans.size()<k){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++) cout<<ans[i]<<" ";
    }
    return 0;
}