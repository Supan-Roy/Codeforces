#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int k, x;
        cin>>k>>x;
        for(int i=0;i<k;i++){
            if((x-1)%3==0 && ((x-1)/3)%2==1){
                x=(x-1)/3;
            }else {
                x*=2;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}