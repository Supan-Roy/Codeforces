#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        int test1 = max((b-a)+1, (c-a)+1);
        int test2 = max((a-b)+1, (c-b)+1);
        int test3 = max((a-c)+1, (b-c)+1);
        int A = max(0, test1);
        int B = max(0, test2);
        int C = max(0, test3);

        cout<<A<<" "<<B<<" "<<C<<endl;
    }
    return 0;
}