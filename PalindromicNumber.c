#include <stdio.h>

int palindromicNumber(int n)
{
    int palindromic = 0;
    while (n > 0)
    {
        palindromic = palindromic * 10 + n % 10;
        n = n / 10;
    }
    return palindromic;
}

int main()
{
    int T, n;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &n);
        if (n == palindromicNumber(n))
        {
            printf("Case %d: Yes\n", i);
        }
        else
        {
            printf("Case %d: No\n", i);
        }
    }

    return 0;
}