#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int k, i,j=0, result=0;
        cin>>k;
        for(i=0;j<k;i++){
                if(i%3!=0 && i%10!=3){
                        result=i;
                        j++;
                }
                
        } cout<<result<<endl;
    }
    return 0;
}