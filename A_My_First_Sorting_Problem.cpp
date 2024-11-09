#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        int minimum, maximum;
        cin>>t;

        while(t--)
        {
                int x,y;
                cin>>x>>y;

                minimum = min(x,y);
                maximum = max(x,y);

                cout<<minimum<<" "<<maximum<<endl;
        }
        return 0;
}