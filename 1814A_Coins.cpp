#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        if((n-k)%2==0 || n%2==0 || n%k==0){
                cout<<"YES"<<endl;
        }else{
                cout<<"NO"<<endl;
        }
    }
    return 0;
}