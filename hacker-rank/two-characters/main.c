#include <stdio.h>
#include <string.h>

int main()
{
    int lenght, k = 0, f = 0, result = 0, m = 1, n = 1, answer = 0;
    scanf("%d", &lenght);

    char s[lenght], a[26];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = k; j >= 0; j--)
        {
            if (s[i] == a[j])
            {
                f = 0;
                break;
            }
            else
                f = 1;
        }
        if (f == 1)
        {
            a[k] = s[i];
            k++;
        }
    }

    for (int i = 0; i <= k; i++)
    {
        for (int j = i + 1; j <= k; j++)
        {
            for (int l = 0; s[l] != '\0'; l++)
            {
                if (a[i] == s[l] && n == 1)
                {
                    result++;
                    n = 0;
                    m = 1;
                }
                else if(a[i] == s[l])
                {
                    result = 0;
                    break;
                }
                else if (a[j] == s[l] && m == 1)
                {
                    result++;
                    m = 0;
                    n = 1;
                }
                else if (a[j] == s[l])
                {
                    result = 0;
                    break;
                }
            }
            if(result > answer)
            answer = result;
            result = 0;
            m=n=1;
        }
    }

    if (answer == 1)
    printf("0");
    else
    printf("%d", answer);
    

    return 0;
}
