#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    int current_pass=0;
    int max_capacity=0;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        current_pass-=a;
        current_pass+=b;

        if(current_pass>max_capacity)
        {
            max_capacity=current_pass;
        }
    }
    cout<<max_capacity<<endl;
    return 0;
}