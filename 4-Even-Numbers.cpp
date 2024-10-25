#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N < 2)
    {
        cout << -1;
    }
    else
    {
        for (int i = 2; i <= N; i+=2)
        {
            if (i % 2 == 0)
                cout << i << endl;
        }
    }
    return 0;
}