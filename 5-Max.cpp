#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, num,maxvalue=0;
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>num;
        maxvalue = max(maxvalue, num);
    }
    cout<<maxvalue<<endl;
    return 0;
}