#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    char ch;
    for(int i=0;i<n*m;i++){
        cin>>ch;
        if(ch=='C' || ch=='M' || ch=='Y'){
                cout<<"#Color"<<endl;
                return 0;
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}