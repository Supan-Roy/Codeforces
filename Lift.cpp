#include <iostream>
using namespace std;

int main()
{
    int pos, lift, cases, time, k, temp;

    cin >> cases;
    for (k = 1; k <= cases; k++)
    {
        cin >> pos >> lift;
        if (lift >= pos)
        {
            temp = lift - pos;
        }
        else
        {
            temp = pos - lift;
        }
        time = 4 * temp + 4 * pos + 19;

        cout << "Case " << k << ": " << time << endl;
    }

    return 0;
}