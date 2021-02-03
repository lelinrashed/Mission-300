#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m, n, t, i, j, flag;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &m, &n);
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
                if (a[i] + a[j] == m)
                    printf("%d\t%d\n", i + 1, j + 1);
    }
    return 0;
}