#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                string s;
                cin>>s;
                bool consecutive = false;
                for (int i=1;i<s.size();i++)
                {
                        if (s[i]==s[i-1])
                        {
                                consecutive = true;
                        }
                }
                if (consecutive){
                        cout<<1<<endl;
                }
                else{
                        cout<<s.size()<<endl;
                }
        }
        return 0;
}