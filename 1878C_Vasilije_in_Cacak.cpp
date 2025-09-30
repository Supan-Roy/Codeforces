#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n, k, x;
    cin>>n>>k>>x;

    long long minsum = (k*(k+1))/2;
    long long maxsum = n*(n+1)/2-((n-k)*(n-k+1))/2;
    if(x<=maxsum && x>=minsum){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    }
    return 0;
}