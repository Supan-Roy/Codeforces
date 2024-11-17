#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while(t--)
        {
                int n;
                cin>>n;
                vector<int>a(n);
                for(int i=0;i<n;i++)
                {
                        cin>>a[i];
                }
                sort(a.begin(), a.end());

                bool isStrictlyIncreasing = true;
                for(int i=0;i<n;i++)
                {
                        if(a[i]==a[i-1])
                        {
                                isStrictlyIncreasing = false;
                                break;
                        }
                }
                if(isStrictlyIncreasing)
                {
                        cout<<"YES"<<endl;
                }
                else{
                        cout<<"NO"<<endl;
                }
        }
        return 0;
}