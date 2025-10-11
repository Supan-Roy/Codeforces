#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==1 || n<4){
            cout<<-1<<endl;
        }else {
            long long bus1=(n+4)/6;
            long long bus2=n/4;

            cout<<bus1<<" "<<bus2<<endl;
        }
    }
    return 0;
}