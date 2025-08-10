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
        char col = s[0];
        char row = s[1];

        for(char r='1';r<='8';r++){
                if(r!=row){
                        cout<<col<<r<<endl;
                }
        }
        for(char c='a';c<='h';c++){
                if(c!=col){
                        cout<<c<<row<<endl;
                }
        }
    }
    return 0;
}