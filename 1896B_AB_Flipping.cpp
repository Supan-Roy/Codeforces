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
        string s;
        cin>>s;
        int sum=0, temp=0;
        for(int i=0;i<n;i++){
                if(s[i]=='A'){
                        temp++;
                } else{
                        if(temp){
                                sum+=temp;
                                temp=1;
                        }
                }
        }
        cout<<sum<<endl;
    }
    return 0;
}