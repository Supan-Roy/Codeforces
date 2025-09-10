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
        string r = "";
        int T = 0, F = 0, N = 0;
        for(int i=0; i<s.size(); i++){
                if(s[i]=='T') T++;
                else if(s[i]=='F') F++;
                else if(s[i]=='N') N++;
                else r+=s[i];
        }
        for(int i=0; i<T; i++) cout<<'T';
        for(int i=0; i<F; i++) cout<<'F';
        for(int i=0; i<N; i++) cout<<'N';
        cout<<r<<endl;  
    }
    return 0;
}