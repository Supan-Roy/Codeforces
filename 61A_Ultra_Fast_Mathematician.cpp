#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    string ans="";

    cin>>a>>b;

    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i]){
                ans+='1';
        }
        else {
                ans+='0';
        }
    }
    cout<<ans<<endl;
    return 0;
}