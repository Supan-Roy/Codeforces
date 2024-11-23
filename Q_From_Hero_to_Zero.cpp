#include <bits/stdc++.h>
using namespace std;

long long findSteps(long long n, long long k)
{
        long long steps=0;
        while(n>0)
        {
                if(n%k==0)
                {
                        n/=k;
                        steps++;
                } else{
                     long long remainder=n%k;
                     if(n<k){
                        steps+=n;
                        break;
                     }
                        n-=remainder;
                        steps+=remainder;
                }
        }
        return steps;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n>>k;
        cout<<findSteps(n,k)<<endl;
    }
    return 0;
}