#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }

    string s;
    cin>>s;
    int total=0;
    for(char c:s){
        total+=arr[c-'1'];
    }
    cout<<total<<endl;
    return 0;
}