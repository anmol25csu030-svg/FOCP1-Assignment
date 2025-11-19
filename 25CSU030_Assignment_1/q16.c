#include <stdio.h>

int main()
{
    int n, i, pos, val;
    scanf("%d", &n);
    int a[100];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &val, &pos);

    printf("Before: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    if (pos == 0)
    {
        for (i = n; i > 0; i--)
            a[i] = a[i - 1];
        a[0] = val;
        n++;
    }
    else if (pos == n)
    {
        a[n] = val;
        n++;
    }
    else
    {
        for (i = n; i > pos; i--)
            a[i] = a[i - 1];
        a[pos] = val;
        n++;
    }

    printf("\nAfter: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

