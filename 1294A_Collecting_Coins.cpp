#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int MAX = max({a,b,c});
        int req = (MAX-a)+(MAX-b)+(MAX-c);
        if(n<req){
            cout<<"NO"<<endl;
        }else {
            n-=req;
            if(n%3==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}