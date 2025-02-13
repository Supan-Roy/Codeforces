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

                int balance=0;
                int minBalance=0;

                for(char c:s){
                        if(c=='(')
                        {
                                balance++;
                        }
                        else{
                                balance--;
                        }
                        minBalance=min(minBalance, balance);
                }
                cout<<-minBalance<<endl;
        }
        return 0;
}