#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q;
    cin>>N>>Q;

    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    sort(A,A+N);

    while(Q--)
    {
        int X;
        cin>>X;

        if(binary_search(A,A+N,X))
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }

    return 0;
}