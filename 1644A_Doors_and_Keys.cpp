#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int r = s.find('r');
        int R = s.find('R');
        int g = s.find('g');
        int G = s.find('G');
        int b = s.find('b');
        int B = s.find('B');

        if(r<R && g<G && b<B){
                cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
    }
    return 0;
}

