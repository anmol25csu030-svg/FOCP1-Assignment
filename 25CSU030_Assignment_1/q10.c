#include <stdio.h>

int main()
{
    int n, i, c = 0;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] == 99)
        {
            c++;
            printf("%d ", i);
        }
    }

    printf("\n%d", c);
    return 0;
}