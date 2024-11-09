#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;

    int phone_number = count(s.begin(), s.end(), '8');
    cout<<min(phone_number,n/11)<<endl;
    return 0;
}