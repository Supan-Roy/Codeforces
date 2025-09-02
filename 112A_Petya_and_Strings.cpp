#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin>>a>>b;

    for(int i=0;i<a.size();i++){
        char ch1 = tolower(a[i]);
        char ch2 = tolower(b[i]);
        if(ch1<ch2){
                cout<<-1<<endl;
                return 0;
        }else if(ch1>ch2){
                cout<<1<<endl;
                return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}