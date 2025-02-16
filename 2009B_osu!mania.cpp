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
    
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<4;j++){
            if(a[i][j]=='#'){
                cout<<j+1<<" ";
            }
        }
    }
    cout<<"\n";
}
    return 0;
}