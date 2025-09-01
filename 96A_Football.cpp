#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int player=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
                player++;
                if(player>=7){
                        cout<<"YES"<<endl;
                        return 0;
                }
        }
        else{
                player=1;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}