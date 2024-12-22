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
                long long n, a, b, c;
                cin >> n >> a >> b >> c;

                long long cycle_sum = a + b + c;
                long long full_cycles = n / cycle_sum;
                long long remaining_distance = n % cycle_sum;

                if (remaining_distance == 0)
                {
                        cout << full_cycles * 3 << endl;
                        continue;
                }

                long long day = full_cycles * 3;
                if (remaining_distance <= a)
                {
                        day += 1;
                }
                else if (remaining_distance <= a + b)
                {
                        day += 2;
                }
                else
                {
                        day += 3;
                }

                cout << day << endl;
        }
        return 0;
}