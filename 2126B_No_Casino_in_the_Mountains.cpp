#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
                cin>>a[i];
        }
        int hikes=0, j=0;
        while(j<=n-k){
                bool hike=true;
                for(int p=j;p<j+k;p++){
                        if(a[p]==1){
                                hike=false;
                                break;
                        }
                }
                if(hike){
                        hikes+=1;
                        j+=k+1;
                } else{
                        j++;
                }
        }
        cout<<hikes<<endl;  
    }
    return 0;
}