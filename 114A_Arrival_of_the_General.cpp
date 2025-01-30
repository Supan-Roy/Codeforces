#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    int officer=0;
    int untcrimes=0;
    for(int i=0;i<n;i++)
    {
        int event;
        cin>>event;
        if(event==-1)
        {
                if(officer>0){
                        officer--;
                }
                else{
                        untcrimes++;
                }
        }
        else{
                officer+=event;
        }
    }
    cout<<untcrimes<<endl;
    return 0;
}