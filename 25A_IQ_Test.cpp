#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int oddCount=0, evenCount=0, oddIndex=-1, evenIndex=-1;

    for(int i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
                evenCount++;
                evenIndex=i+1;
        }
        else {
                oddCount++;
                oddIndex=i+1;
        }
    }
    if(oddCount==1)
    {
        cout<<oddIndex<<endl;
    }
    else{
        cout<<evenIndex<<endl;
    }
    return 0;
}