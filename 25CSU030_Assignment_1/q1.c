#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, r;
    int sum = 0;
    scanf("%d", &n);

    temp = n;
    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + pow(r, 3);
        temp = temp / 10;
    }

    if (sum == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}