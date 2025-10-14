#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;){
            char c=s[i];
            cout<<c;
            int j=i+1;
            while(j<n && s[j]!=c){
                j++;
            }
            i=j+1;
        }
        cout<<endl;
    }
    return 0;
}