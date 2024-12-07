#include <bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int b, p, f, h, c;
                cin >> b >> p >> f;
                cin >> h >> c;

                int profit = 0;

                if (h > c)
                {

                        int hamburgers = min(b / 2, p);
                        profit += hamburgers * h;
                        b -= hamburgers * 2;

                        int chicken_burgers = min(b / 2, f);
                        profit += chicken_burgers * c;
                }
                else
                {
                        int chicken_burgers = min(b / 2, f);
                        profit += chicken_burgers * c;
                        b -= chicken_burgers * 2;

                        int hamburgers = min(b / 2, p);
                        profit += hamburgers * h;
                }

                cout << profit << endl;
        }
        return 0;
}