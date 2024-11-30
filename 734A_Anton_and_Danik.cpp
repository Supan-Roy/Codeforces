#include <bits/stdc++.h>
using namespace std;
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n, anton=0,danik=0;;
        string s;
        cin>>n;
        cin >> s;
        for(int i=0;i<n;i++)
        {
           if (s[i]=='A')  
           anton++;
           else if(s[i]=='D')
           danik++;  
        }
        if(anton==danik)
        cout<<"Friendship"<<endl;
        else if(anton>danik)
        cout<<"Anton"<<endl;
        else
        cout<<"Danik"<<endl;
        return 0;
}