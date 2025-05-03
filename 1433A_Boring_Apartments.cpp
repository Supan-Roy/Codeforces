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
        int x;
        cin>>x;
        int total=0;

        for(int d=1;d<=9;d++){
                int temp=0;
                for(int ln=1;ln<=4;ln++){
                        temp=temp*10+d;
                        total+=ln;

                if(temp == x){
                        cout<<total<<endl;
                }        
                }
        }
    }
    return 0;
}