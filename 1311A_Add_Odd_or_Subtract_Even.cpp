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
        int count=0;
        if(a==b){
                count=0;
        } else if(a<b){
                if((b-a)%2==1){
                        count+=1;
                } else count+=2;
        } else{
                if((a-b)%2==0){
                        count+=1;
                } else count+=2;
        }
        cout<<count<<endl;
    }
    return 0;
}