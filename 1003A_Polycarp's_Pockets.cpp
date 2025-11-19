#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int freq[101] = {0};
    for(int x:a){
        freq[x]++;
    }
    int ans=0;
    for(int i=1;i<=100;i++){
        ans = max(ans, freq[i]);
    }
    cout<<ans<<endl;
    return 0;
}