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
        int h = (s[0]-'0')*10 + (s[1]-'0');
        int m = (s[3]-'0')*10 + (s[4]-'0');

        string p;
        if(h>=12){
                p="PM";
        } else{
                p="AM";
        }

        if(h==0) h=12;
        else if(h>12) h-=12;

        if(h<10) cout<<"0";
        cout<<h<<":";

        if(m<10) cout<<"0";
        cout<<m<<" "<<p<<endl;
    }
    return 0;
}