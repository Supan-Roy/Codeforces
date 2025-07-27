#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        int difference=abs(a-b);
        int count=0;
        if(a==b){
                cout<<0<<endl;
        } else{
              count = (difference+9)/10;
              cout<<count<<endl;
        }
    }
    return 0;
}