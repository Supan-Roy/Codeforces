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
        int result=0, sum=0;
        while(sum+(result+1)<=n)
        {
                result++;
                sum+=result;
        }
        cout<<result<<endl;
    }
    return 0;
}
