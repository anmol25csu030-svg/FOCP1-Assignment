#include <stdio.h>
#include <math.h>

int main()
{
    int ch;
    scanf("%d", &ch);

    if(ch == 1)
    {
        int b, d = 0, i = 0, r;
        scanf("%d", &b);
        while(b > 0)
        {
            r = b % 10;
            d = d + r * pow(2, i);
            b = b / 10;
            i++;
        }
        printf("%d", d);
    }
    else if(ch == 2)
    {
        int d, b = 0, i = 1, r;
        scanf("%d", &d);
        while(d > 0)
        {
            r = d % 2;
            b = b + r * i;
            d = d / 2;
            i = i * 10;
        }
        printf("%d", b);
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
