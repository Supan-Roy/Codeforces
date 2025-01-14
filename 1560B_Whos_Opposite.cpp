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
        int a,b,c;
        cin>>a>>b>>c;

        int n=2*abs(b-a);
        if(n<max({a,b,c}) || n%2!=0)
        {
                cout<<"-1"<<endl;
        }
        else
        {
                int m= (c+n/2-1)%n+1;
                cout<<m<<endl;
        }
    }
    return 0;
}