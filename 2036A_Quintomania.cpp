#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> notes(n);
        for(int i=0;i<n;i++)
        {
                cin>>notes[i];
        }
        int perfect=1;
        for(int i=1;i<n;i++)
        {
                int x=abs(notes[i]-notes[i-1]);
                if(x!=5 && x!=7)
                {
                        perfect=0;
                        break;
                }
        }
        if(perfect){
                cout<<"YES"<<endl;
        } else{
                cout<<"NO"<<endl;
        }
    }
    return 0;
}