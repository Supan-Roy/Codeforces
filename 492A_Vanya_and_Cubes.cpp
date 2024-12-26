#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        int height=0;
        int cubes=0;

        for(int i=1;;i++)
        {
                cubes+=i*(i+1)/2;
                if(cubes>n) break;
                height++;
        }
        cout<<height<<endl;
        return 0;
}