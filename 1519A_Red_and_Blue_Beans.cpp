#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long r,b,d;
        cin>>r>>b>>d;

        if(r>b){
                swap(r,b);
        }
        if(b<=r*(d+1)){
                cout<<"YES"<<endl;
        } else{
                cout<<"NO"<<endl;
        }
    }
    return 0;
}