#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string s = to_string(x);

        for(int i=0;;i++){
            string y = to_string(i);
            bool got_it = false;
            for(char c1 : s){
                for(char c2 : y){
                        if(c1==c2){
                           got_it = true;
                           break;     
                        }
                }
                if(got_it) break;
        }
        if(got_it){
                cout<<y<<endl;
                break;
        }
       }
    }
    return 0;
}