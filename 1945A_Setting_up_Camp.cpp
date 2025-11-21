#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        int ext = (b+2)/3;
        int req_uni = 3*ext-b;
        int ans = a+(b+c+2)/3;
        if(req_uni>c){
            cout<<-1<<endl;
        }
        else {
            cout<<ans<<endl;
        }
    }
    return 0;
}