#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int count=0;
        for(int i=1;i<10;i++){
            long long temp=i;
            while(temp<=n){
                count++;
                temp=temp*10+i;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}