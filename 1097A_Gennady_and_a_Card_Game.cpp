#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string table, hand;
    cin>>table;
    
    for(int i=0;i<5;i++){
        cin>>hand;
        if(hand[0]==table[0] || hand[1]==table[1])
        {
                cout<<"YES"<<endl;
                return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}