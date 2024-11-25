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
                int x1,x2,x3;
                cin>>x1>>x2>>x3;

                int arr[]={x1,x2,x3};
                sort(arr,arr+3);

                int a=arr[1];

                int result=abs(a-arr[0])+abs(a-arr[1])+abs(a-arr[2]);
                cout<<result<<endl;
        }
        return 0;
}