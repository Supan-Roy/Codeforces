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
        int s1, s2, s3, s4;
        cin>>s1>>s2>>s3>>s4;

        int W1=max(s1, s2);
        int W2=max(s3, s4);

        int L1=min(s1, s2);
        int L2=min(s3,s4);

        if(L1<W2 && L2<W1)
        {
                cout<<"YES"<<endl;
        } else{
                cout<<"NO"<<endl;
        }
    }
    return 0;
}