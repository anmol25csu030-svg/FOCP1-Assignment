#include <stdio.h>

int main()
{
    int n, i, pos;
    scanf("%d", &n);
    int a[100];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);

    printf("Before: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    if (pos >= 0 && pos < n)
    {
        for (i = pos; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
    }

    printf("\nAfter: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

