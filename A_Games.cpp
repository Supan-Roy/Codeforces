#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int target = 0;
    int A[n], B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        cin >> B[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] == B[j])
            {
                target++;
            }
        }
    }
    cout << target;
    return 0;
}