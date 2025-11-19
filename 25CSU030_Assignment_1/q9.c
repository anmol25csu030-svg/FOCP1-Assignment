#include <stdio.h>

int main()
{
    int n, i, f = -1;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] == 99)
        {
            f = i;
            break;
        }
    }

    if (f == -1)
        printf("Not found");
    else
        printf("%d", f);

    return 0;
}
