#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int count=0;
    int bills[] = {100, 20, 10, 5, 1};

    for(int i=0;i<5;i++){
        count+=n/bills[i];
        n%=bills[i];
    }
    cout<<count<<endl;
    return 0;
}