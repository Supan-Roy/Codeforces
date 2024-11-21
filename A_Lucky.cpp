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
        string target;
        cin>>target;

        int sum1= target[0]+target[1]+target[2];
        int sum2= target[3]+target[4]+target[5];

        cout<<(sum1==sum2 ? "YES": "NO")<<endl;
    }
    return 0;
}