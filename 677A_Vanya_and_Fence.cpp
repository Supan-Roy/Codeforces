#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int totalWidth=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>h)
        {
                totalWidth+=2;
        } else{
                totalWidth+=1;
        }
    }
    cout<<totalWidth<<endl;
    return 0;
}