#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    if (x[0] % 2 == x[n - 1] % 2) {
        cout << 0 << endl;
        return;
    }
    int left = n, right = n;
    for (int i = 1; i < n; ++i) {
        if (x[i] % 2 != x[0] % 2) {
            left = i;
            break;
        }
    }
    for (int i = 1; i < n; ++i) {
        if (x[n - i - 1] % 2 != x[n - 1] % 2) {
            right = i;
            break;
        }
    }
    cout << min(left, right) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}