#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int even=0, odd=0;

        for(int i=0;i<n;i++)
        {
                cin>>a[i];
                if(a[i]%2==0){
                even=1;
                }
                else{
                        odd=1;
               }
        }
                if(even+odd==1){
                        cout<<"YES"<<endl;
                }
                else 
                cout<<"NO"<<endl;
        
    }
    return 0;
}