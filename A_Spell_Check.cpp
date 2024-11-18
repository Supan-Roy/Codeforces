#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        string valid = "Timur";
        sort(valid.begin(),valid.end());
        while(t--)
        {
                int n;
                cin>>n;
                string s;
                cin>>s;
              
                sort(s.begin(), s.end());
                
                if(s==valid)
                {
                        cout<<"YES"<<endl;
                }
                else{
                        cout<<"NO"<<endl;
                }
        }
        return 0;
}