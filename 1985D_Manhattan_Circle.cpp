#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>hard_disk(n);

        int min_row=n, max_row=0;
        int min_col=m, max_col=0;
        for(int i=0;i<n;i++){
            cin>>hard_disk[i];
            for(int j=0;j<m;j++){
                if( hard_disk[i][j]=='#'){
                    min_row=min(min_row, i+1);
                    max_row=max(max_row, i+1);
                    min_col=min(min_col, j+1);
                    max_col=max(max_col, j+1);
                }
            }
        }
        int targetRow=(min_row+max_row)/2;
        int targetCol=(min_col+max_col)/2;
        cout<<targetRow<<" "<<targetCol<<endl;
    }
    return 0;
}