#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
        int p1=1, p2=2, sp=3;

        for(int i=0;i<n;i++){
                int w = a[i];
                if(w==sp){
                        cout<<"NO"<<endl;
                        return 0;
                }
                int loser = 6-w-sp;
                sp = loser;
        }
    cout<<"YES"<<endl;
    return 0;
}