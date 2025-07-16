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
        if (s.size() >= 3 && s.substr(0, 2) == "10" && stoi(s.substr(2)) >= 2 && s[2] != '0')
        {
                cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }
    }
    return 0;
}