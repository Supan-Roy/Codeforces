#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[100];
        int sum=0, zeros=0;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        for(int j=0;j<n;j++){
                if(arr[j]==0){
                     zeros++; 
                     if(zeros>sum){
                        sum=zeros;
                     }
                } else {
                        zeros=0;
                }
        }
        cout<<sum<<endl;
    }
    return 0;
}