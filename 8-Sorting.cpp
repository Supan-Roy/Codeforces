#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<N;i++){
        for(int j=1;j<N;j++)
        {
            if(A[j]<A[j-1])
            swap(A[j], A[j-1]);
        }
    }
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}