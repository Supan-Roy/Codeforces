#include <bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin >> t; 
        while (t--)
        {
                int m, a, b, c;
                cin >> m >> a >> b >> c;

                int assigned_to_row1 = min(a, m);
                int assigned_to_row2 = min(b, m);

                int remaining_seats_row1 = m - assigned_to_row1;
                int remaining_seats_row2 = m - assigned_to_row2;

                int remaining_monkeys = min(c, remaining_seats_row1 + remaining_seats_row2);

                int total_seated = assigned_to_row1 + assigned_to_row2 + remaining_monkeys;

                cout << total_seated << endl; 
        }
        return 0;
}
