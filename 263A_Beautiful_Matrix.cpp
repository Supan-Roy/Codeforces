#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
                int x;
                cin>>x;
                if(x==1){
                        r=i;
                        c=j;
                }
        }
    }
    int ans=abs(r-3)+abs(c-3);
    cout<<ans<<endl;
    return 0;
}