#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int freq[26]={0};
        int solved=0;
        for(char c:s){
                int index = c-'A';
                if(freq[index]==0){
                        solved+=2;
                        freq[index]=1;
                } else solved++;
        }
        cout<<solved<<endl;
    }
    return 0;
}