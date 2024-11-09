#include<bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin>>t;
        while(t--)
        {
                string s;
                cin>>s;
                int sum1=0, sum2=0;
                for(int i=0;i<s.length();i++)
                {
                        if(s[i]=='A')
                        sum1++;
                        else
                        sum2++;
                }
                if(sum1>sum2)
                cout<<"A"<<endl;
                else
                cout<<"B"<<endl;
        }  
        return 0;
}