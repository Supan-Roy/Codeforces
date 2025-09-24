#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char c;
        cin>>c;
        int i;
        int n=s.size();
        for(i=0;i<n;i++){
                if(s[i]==c && i%2==0){
                        cout<<"YES"<<endl;
                        break;
                }
        }
        if(i==n) cout<<"NO"<<endl;
    }
    return 0;
}