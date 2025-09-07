#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a, x, y;
        cin>>a>>x>>y;

        if(abs(y-x)<abs(a-x) || abs(x-y)<abs(a-y)){
                cout<<"YES"<<endl;
        }else {
                cout<<"NO"<<endl;
        }
    }
    return 0;
}