#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    if(x > 0 && y > 0)
        printf("First Quadrant");
    else if(x < 0 && y > 0)
        printf("Second Quadrant");
    else if(x < 0 && y < 0)
        printf("Third Quadrant");
    else if(x > 0 && y < 0)
        printf("Fourth Quadrant");
    else if(x == 0 && y != 0)
        printf("On Y-axis");
    else if(y == 0 && x != 0)
        printf("On X-axis");
    else
        printf("Origin");
        
    return 0;
}
