#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            sum++;
        }
    }
    if (sum == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
    return 0;
}