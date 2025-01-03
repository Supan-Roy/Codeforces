#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sereja=0;
    int dima=0;
    int p1=0;
    int p2=n-1;
    int turn=0;
    while(p1<=p2)
    {
        if(turn%2==0){
                if(arr[p1]>arr[p2]){
                        sereja+=arr[p1];
                        p1++;
                }
                else{
                        sereja+=arr[p2];
                        p2--;
                }
        }
        else{
                if (arr[p1] > arr[p2])
                 {
                        dima += arr[p1];
                        p1++;
                 }
                else
                 {
                        dima += arr[p2];
                        p2--;
                 }
        }
        turn++;
    }   
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}