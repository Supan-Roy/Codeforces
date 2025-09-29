#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int anna = a+(c+1)/2;
        int katie = b+c/2;
        if(anna>katie){
                cout<<"First"<<endl;
        }else cout<<"Second"<<endl;
    }
    return 0;
}