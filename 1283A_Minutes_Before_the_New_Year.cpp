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
        int h,m;
        cin>>h>>m;

        int x=(24-h)*60;
        cout<<x-m<<endl;
    }
    return 0;
}