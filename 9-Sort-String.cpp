#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[125] = {0};
    for (int i = 0; i < N; i++)
    {
        char ch;
        cin >> ch;
        arr[(int)ch]++;
    }

    for (int i = 97; i <= 122; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << (char)i;
        }
    }
    cout << endl;
    return 0;
}