#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    long long totalCost= k*(long long)w*(w+1)/2;
    if(totalCost>n){
        cout<<totalCost-n<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}