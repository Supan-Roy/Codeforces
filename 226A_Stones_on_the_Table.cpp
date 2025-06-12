#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, temp=0;
    string s;
    cin>>n>>s;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1]){
                temp++;
        }
    }
    cout<<temp<<endl;

    return 0;
}