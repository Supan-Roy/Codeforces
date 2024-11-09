#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;

        while(t--)
        {
                string a,b;
                cin>>a>>b;

                // char temp = a[0];
                // a[0]=b[0];
                // b[0]=temp;

                 swap(a[0], b[0]);
                cout<<a<<" "<<b<<endl;
        }
        return 0;
}