#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        k = 0;
        for(j = 1; j <= i; j++)
        {
            printf("%d", k);
            k = 1 - k;
        }
        printf(" ");
        k = 0;
        for(j = 1; j <= i; j++)
        {
            printf("%d", k);
            k = 1 - k;
        }
        printf("\n");
    }

    return 0;
}