#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int timeRemain=240-k;
    int solved=0;
    int timeSpent=0;

    for(int i=1;i<=n;i++)
    {
        timeSpent+=5*i;
        if(timeSpent<=timeRemain)
        {
                solved++;
        }
        else{
                break;
        }
    }
    cout<<solved<<endl;
    return 0;
}