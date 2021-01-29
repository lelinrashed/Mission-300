#include <stdio.h>
#include <string.h>

int main()
{
    int a[27], n, f = 1, x;
    char s[10000];
    gets(s);

    for (int i = 1; i < 27; i++)
        a[i] = 0;

    scanf("%d", &n);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
        {
            f++;
            if (a[s[i] - 96] < f)
                a[s[i] - 96] = f;
        }
        else
        {
            if (a[s[i] - 96] < f)
                a[s[i] - 96] = f;
            f = 1;
        }
    }

    for (int k = 0; k < n; k++)
    {
        f = 0;
        scanf("%d", &x);
        for (int i = 1; i <= 26; i++)
        {
            if (x % i == 0)
            {
                if (x / i <= a[i])
                {
                    f = 1;
                    break;
                }
                else
                    f = 0;
            }
        }
        if (f == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
