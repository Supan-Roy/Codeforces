#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        long long a,b,m;
        cin>>a>>b>>m;

        long long sideA=m/a+1;
        long long sideB=m/b+1;
        cout<<sideA+sideB<<endl;
    }
    return 0;
}