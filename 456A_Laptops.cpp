#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b;
    cin>>n;
    vector<pair<int, int>>lap(n);

    for(int i=0;i<n;i++){
        cin>>lap[i].first>>lap[i].second;
    }

    sort(lap.begin(), lap.end());

    for(int i=1;i<n;i++){
        if(lap[i].second<lap[i-1].second){
                cout<<"Happy Alex"<<endl;
                return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}