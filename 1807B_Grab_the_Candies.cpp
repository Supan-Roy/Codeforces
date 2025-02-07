#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;
                int temp;
                int mihai = 0, bianca = 0;
                for (int i = 0; i < n; i++)
                {
                        cin>>temp;
                        if (temp&1)
                                mihai+=temp;
                        else
                                bianca+=temp;
                }
                if (bianca>mihai){
                        cout <<"YES"<<endl;
                }
                else{
                        cout <<"NO"<<endl;
                }
        }
        return 0;
}