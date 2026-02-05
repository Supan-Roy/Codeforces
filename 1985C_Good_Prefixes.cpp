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
        
        long long sum=0, count=0;
        long long Max=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
            Max=max(Max,x);

            if(sum==2*Max){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}