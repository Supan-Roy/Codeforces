#include <bits/stdc++.h>
using namespace std;
int main()
{
        string s;
        cin>>s;
        int d1,d2;
        int sum=0;
        char p='a';
        for(int i=0;i<s.length();i++)
        {
                d1=(s[i]-p);
                if(d1>0)
                d2=d1-26;
                else
                d2=d1+26;
                p=s[i];
                sum+=min(abs(d1),abs(d2));
        }
        cout<<sum<<endl;
    return 0;
}