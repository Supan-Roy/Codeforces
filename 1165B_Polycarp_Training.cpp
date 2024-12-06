#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int days=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=days+1){
                days++;
        }
    }
    cout<<days<<endl;
    return 0;
}