#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    double sum=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    double ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}