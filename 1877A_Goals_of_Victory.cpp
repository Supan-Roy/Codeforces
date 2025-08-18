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
        int sum = 0;
        for(int i=0;i<n-1;i++){
                int a;
                cin>>a;
                sum+=a;
        }
        cout<<-sum<<endl;
    }
    return 0;
}