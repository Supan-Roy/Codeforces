#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;

        int pcs=1;
        while((w%2==0) && (pcs<n)){
            w/=2;
            pcs*=2;
        }
        while((h%2==0) && (pcs<n)){
            h/=2;
            pcs*=2;
        }
        if(pcs>=n){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}