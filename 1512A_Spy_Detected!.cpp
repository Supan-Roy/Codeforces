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
        int a[n];
        for(int i=0;i<n;i++){
                cin>>a[i];
        }
        if(a[0]==a[1]){
                for(int i=0;i<n;i++){
                        if(a[0]!=a[i]){
                                cout<<1+i<<endl;
                        }
                }
        }
        else{
                if(a[0]==a[2]){
                        cout<<2<<endl;
                } else{
                        cout<<1<<endl;
                }
        }
    }
    return 0;
}