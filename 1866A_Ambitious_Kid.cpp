#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
                cout<<0<<endl;
                return 0;
        }
    }    
        int nr=a[0];
        for(int i=0;i<n;i++){
                if(abs(a[i])<abs(nr)){
                        nr=a[i];
                }
                else if(abs(a[i])==abs(nr)){
                        nr=a[i];
                }
        }
    cout<<abs(nr)<<endl;
    return 0;
}

//Well, instead of the 2nd step, we could simply do this
// int ans = INT_MAX;
// ans = min(ans, abs(a[i]));
// cout<<ans<<endl;