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

        int c1=n/3;
        int c2=n/3;
        if(n%3==1){
                c1+=1;
        }
        else if(n%3==2){
                c2+=1;
        }
        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}