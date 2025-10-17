#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<=n-3;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
            count++;
            i+=2;
        }
    }
    cout<<count<<endl;
    return 0;
}