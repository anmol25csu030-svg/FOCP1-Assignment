#include <stdio.h>

int main()
{
    int n, i, j, c = 0, f;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] > 1)
        {
            f = 1;
            for (j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    f = 0;
                    break;
                }
            }
            if (f == 1)
                c++;
        }
    }

    printf("%d", c);
    return 0;
}
