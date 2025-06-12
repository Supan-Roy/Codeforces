#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int X=0;
    while(n--){
        string s;
        cin>>s;
        if(s[1]=='+'){
                X++;
        }
        else if(s[1]=='-'){
                X--;
        }
    }
    cout<<X<<endl;
    return 0;
}