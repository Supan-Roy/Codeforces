#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
       int x,y,z;
       cin>>x>>y>>z;
       int a[3]={x,y,z};
       sort(a, a+3);
       if(a[1]!=a[2]){
        cout<<"NO"<<endl;
       } else{
        cout<<"YES"<<endl;
        cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
       }
    }
    return 0;
}