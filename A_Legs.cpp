#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int n=0;n<=t;n++){
        cin>>n;

        int animals = n/4 + (n%4!=0?1:0);
        cout<<animals<<endl;
    }
    return 0;
}