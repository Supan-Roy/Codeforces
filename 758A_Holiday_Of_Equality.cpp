#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        int arr[n];
        int MaxI = 0;
        long long target = 0;
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
                MaxI = max(arr[i], MaxI);
        }
        for (int i = 0; i < n; i++)
        {
                target += MaxI - arr[i];
        }
        cout << target << endl;
        return 0;
}