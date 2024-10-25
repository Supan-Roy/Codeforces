#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    cout << min({A, B, C}) << " " << max({A, B, C});
    return 0;
}