#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    vector<int>pos={a,b,c};
    sort(pos.begin(),pos.end());

    int meeting_point=pos[1];
    int total_dis=abs(a-meeting_point) + abs(b-meeting_point) + abs(c-meeting_point);

    cout<<total_dis<<endl;
    return 0;
}