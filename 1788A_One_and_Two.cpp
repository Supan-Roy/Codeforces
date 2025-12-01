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
        vector<int>a(n);
        int two=0;
        for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]==2) two++;
        }
        int k=0, get=0;
        for(int i=0;i<n-1;i++){
                if(a[i]==2){
                    k++;    
                } 
                if(k*2==two){
                   cout<<i+1<<endl;
                   get=1;
                   break;
                }
        }
        if(!get){
        cout<<-1<<endl;
    }
    }
    
    return 0;
}