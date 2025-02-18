#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int remainder = a%b;
        if(remainder==0){
                cout<<"0"<<endl;
        }
        else {
                cout<<(b-remainder)<<endl;
        }
    }
    return 0;
}