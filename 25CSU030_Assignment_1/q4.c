#include <stdio.h>

void swapTemp(int x, int y)
{
    int t = x;
    x = y;
    y = t;
    printf("%d %d\n", x, y);
}

void swapArithmetic(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
    printf("%d %d\n", x, y);
}

void swapXor(int x, int y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("%d %d\n", x, y);
}

void swapPointer(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    printf("%d %d\n", *x, *y);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    swapTemp(a, b);
    swapArithmetic(a, b);
    swapXor(a, b);
    swapPointer(&a, &b);
    
    return 0;
}
