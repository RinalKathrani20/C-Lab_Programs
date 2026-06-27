// Determine the roots of the equation ax2+bx+c=0.
#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, d, x, y;
    printf("enter a,b,c:");
    scanf("%d %d %d", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("roots are:%d %d", x, y);
    }
    else if (d == 0)
    {
        x = -b / (2 * a);
        printf("root is=%d", x);
    }
    else
    {
        printf("roots are imagininary");
    }
}