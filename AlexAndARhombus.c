#include <stdio.h>

int main()
{
    int a, b, n, r;

    while (scanf("%d", &n) != EOF)
    {
        a = n - 1;
        r = (n * n) + (a * a);
        printf("%d\n", r);
    }

    return 0;
}