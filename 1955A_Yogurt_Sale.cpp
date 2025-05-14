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
        int n,a,b;
        cin>>n>>a>>b;
        int p=n/2;
        int s=n%2;

        int cost = p*min(2*a,b)+s*a;
        cout<<cost<<endl;
    }
    return 0;  
}