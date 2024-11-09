#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int temp=0;
    cin>>n;
    cin>>m;
    while(n!=m){
        temp++;
        if(m<n || m%2!=0)
        {
            m++;
        }
        else 
        m=m/2;
    }
    cout<<temp<<endl;
    return 0;
}