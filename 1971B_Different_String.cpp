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
        cin >> s;
        string orig = s;

        if (all_of(s.begin(), s.end(), [&](char c)
                   { return c == s[0]; }))
        {
            cout << "NO" << endl;
            continue;
        }

        string r = s;
        sort(r.begin(), r.end());

        if (r == orig)
        {
            int j = 1;
            while (j < (int)r.size() && r[j] == r[0])
                ++j;
            swap(r[0], r[j]);
        }

        cout << "YES\n"<< r << endl;
    }
    return 0;
}
