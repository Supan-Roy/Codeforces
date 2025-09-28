#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n+1)%3==0 || (n-1)%3==0){
                cout<<"First"<<endl;
        }else cout<<"Second"<<endl;
    }
    return 0;
}
