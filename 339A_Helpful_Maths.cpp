#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[1000];
    
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
                a[count++]=s[i]-'0';
        }
    }
    sort(a,a+count);

    for(int i=0;i<count;i++)
    {
        if(i>0){
        cout<<"+";
        }
        cout<<a[i];
    }
    return 0;
}