#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        string t;
        cin>>n>>t;

        string s="";
        int step=1;
        for(int i=0;i<n;i+=step)
        {
                s+=t[i];
                step++;
        }
        cout<<s<<endl;
        return 0;
}