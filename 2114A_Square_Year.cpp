#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
            string s;
            cin>>s;
            int year=stoi(s);
            bool found=false;

            for (int a=0;a<=99 && !found;a++)
            {
                    for (int b=0;b<=99;b++)
                    {
                            int sum=a+b;
                            if (sum*sum==year)
                            {
                                    cout<<a<<" "<<b<<endl;
                                    found=true;
                                    break;
                            }
                    }
            }

            if (!found)
                    cout<<-1<<endl;
    }
    return 0;
}
