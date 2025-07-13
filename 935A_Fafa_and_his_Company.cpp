#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<n;i++){
        if((n-i)%i==0){
                if((n-i)/1>=1){
                        count++;
                }
        }
    }
    cout<<count<<endl;
    return 0;
}