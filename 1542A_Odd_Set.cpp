#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--)
    {
    int n;
    cin>>n;
    int even=0, odd=0;
    for(int i=0;i<2*n;i++)
    {
        int x;
        cin>>x;
        if(x%2==0){
                even++;
        } else{
                odd++;
        }
    }
    if(even==odd){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }
}
    return 0;
}