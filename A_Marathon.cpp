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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int count=0;
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;

        cout<<count<<endl;
    }
    return 0;
}