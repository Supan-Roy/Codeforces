#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    int mishkaWins=0;
    int chrisWins=0;
    int draw=0;

    for(int i=0;i<n;i++)
    {
        int m,c;
        cin>>m>>c;
        if(m>c)
        {
                mishkaWins++;
        } else if(c>m)
        {
                chrisWins++;
        } else if(m==c)
        {
                draw++;
        }
    }
    if(mishkaWins>chrisWins)
    {
        cout<<"Mishka"<<endl;
    }
    else if(chrisWins>mishkaWins)
    {
            cout << "Chris" << endl;
    }
    else if(draw==n || mishkaWins==chrisWins)
    {
            cout << "Friendship is magic!^^"<<endl;
    }
    return 0;
}