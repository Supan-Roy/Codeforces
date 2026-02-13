#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int b=0;
        bool found=false;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='('){
                b++;
            } else b--;

            if(b==0){
                found=true;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
    }
    return 0;
}