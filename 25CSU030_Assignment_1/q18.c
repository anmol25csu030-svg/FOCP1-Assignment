#include <stdio.h>

int main()
{
    int n, i, j, f = 0;
    scanf("%d", &n);
    int a[n], used[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        used[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (used[i] == 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    printf("%d ", a[i]);
                    used[j] = 1;
                    f = 1;
                }
            }
        }
    }

    if (f == 0)
        printf("-1");

    return 0;
}
