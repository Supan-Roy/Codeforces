#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c[4];
    for(int i=0;i<4;i++)
    {
        cin>>c[i];
    }
    sort(c,c+4);
    int d=0;
    for(int i=0;i<4;i++)
    {
        if(c[i]==c[i-1]){
                d++;
        }
    }
    cout<<d<<endl;
    return 0;
}