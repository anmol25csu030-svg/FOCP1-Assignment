#include <stdio.h>

int main()
{
    int n, i, p = -1;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if ((i == 0 || a[i] >= a[i - 1]) && (i == n - 1 || a[i] >= a[i + 1]))
        {
            p = a[i];
            break;
        }
    }

    if (p == -1)
        printf("No peak");
    else
        printf("%d", p);

    return 0;
}