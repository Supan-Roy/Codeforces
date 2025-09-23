#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int length=0;
        int temp=n;
        while(temp>0){
                length++;
                temp/=10;
        }
        int base=1;
        for(int i=1;i<length;i++){
            base*=10;
        }
        int ans = (length-1)*9+(n/base);
        cout<<ans<<endl;
    }
    return 0;
}