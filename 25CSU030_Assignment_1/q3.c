#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    while(b != 0)
    {
        int x = (~a) & b;
        a = a ^ b;
        b = x << 1;
    }
    
    printf("%d", a);
    return 0;
}
