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
        int n;
        cin>>n;
        int result = (-1+sqrt(1+8*n))/2;
        cout<<result<<endl;
    }
    return 0;
}