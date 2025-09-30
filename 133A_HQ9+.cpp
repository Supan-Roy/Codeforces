#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string p;
    cin>>p;
    for(char c:p){
        if(c=='H' || c=='Q' || c=='9'){
                cout<<"YES"<<endl;
                return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
