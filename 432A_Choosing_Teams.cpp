#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    int count=0, ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];

        if((a[i]+k)<=5){
            count++;
        }
    }
    ans = count/3;
    cout<<ans<<endl;
    return 0;
}