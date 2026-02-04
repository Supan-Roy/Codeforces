#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int x;
    cin>>x;
    unordered_set<int>set;

    for(int i=0;i<x;i++){
        int l1;
        cin>>l1;
        set.insert(l1);
    }
    int y;
    cin>>y;
    for(int j=0;j<y;j++){
        int l2;
        cin>>l2;
        set.insert(l2);
    }

    if(set.size()==n){
        cout<<"I become the guy."<<endl;
    } else {
        cout<<"Oh, my keyboard!"<<endl;
    }
    
    return 0;
}