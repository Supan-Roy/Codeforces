#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin>>a>>b>>c;
    
    int ans = min({(a+b+c), 2*(a+b), 2*(a+c), 2*(b+c)});
    cout<<ans<<endl;
    return 0;
}