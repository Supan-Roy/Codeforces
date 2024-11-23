#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string x,y;
    cin>>x>>y;
    int comb=0;
    for(int i=0;i<n;i++)
    {
        int forward = abs(x[i]-y[i]);
        int backward = 10-forward;

        comb+=min(forward,backward);
    }
    cout<<comb<<endl;
    return 0;
}