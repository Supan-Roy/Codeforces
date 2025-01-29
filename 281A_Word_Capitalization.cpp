#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;

    if(s[0]>='a' && s[0]<='z')
    {
        s[0]=s[0]-32;
    }
    cout<<s<<endl;
    return 0;
}