#include <bits/stdc++.h>
using namespace std;
int main(){
    int X;
    cin>>X;
    if(X<=1){
        cout<<"NO";
        return 0;
    }
    for(int i=2;i*i<=X;i++){
        if(X%i==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}