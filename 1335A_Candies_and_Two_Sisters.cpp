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

        int ways=(n-1)/2;
        if(n<=2){
                cout<<0<<endl;
        }
        else {
                cout<<ways<<endl;
        }
    }
    return 0;
}