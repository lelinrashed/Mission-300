#include <stdio.h>
int main()
{
    int n, d, m, sum = 0, c = 0, k = 0, b = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &d);
    scanf("%d", &m);
    while (b != 1)
    {

        for (int j = 1; j <= m; j++)
        {
            sum = sum + a[k];
            k++;
        }
        if (sum == d)
        {
            c++;
        }
        if (k > n)
        {
            b = 1;
        }
        sum = 0;
        k = k - m + 1;
    }
    printf("%d", c);
}