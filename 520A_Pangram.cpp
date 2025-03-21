#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin>>n>>s;
    set<char>c;

    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
                s[i]+='a'-'A';    
        }
        c.insert(s[i]);
}
        if(c.size()==26){
                cout<<"YES"<<endl;
        }
        else{
                cout<<"NO"<<endl;
        }
    
    return 0;
}