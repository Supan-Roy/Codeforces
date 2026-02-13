#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d<b){
            cout<<-1<<endl;
            continue;
        }
        int check=a+(d-b);
        if(check>=c){
            int y = d-b;
            int x = a+y-c;
            int moves=x+y;
            cout<<moves<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    return 0;
}