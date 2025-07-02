#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<-1<<endl;
    } else{
        for(int i=1;i<=n;i+=2){
                cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}