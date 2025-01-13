#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int even=0;
        int odd=0;

        for(int i=0;i<n;i++){
                int p;
                cin>>p;
                if(p%2==0){
                        even++;
                } else
                odd++;
        }
        if(odd%2==0){
                cout<<"YES"<<endl;
        }
        else {
                cout<<"NO"<<endl;
        }
    }
    
    return 0;
}