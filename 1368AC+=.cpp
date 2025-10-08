#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long a, b, n;
        cin>>a>>b>>n;
        int count=0;
        if(a>b){
            swap(a,b);
        }
        while(b<=n){
            a+=b;
            swap(a,b);
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}