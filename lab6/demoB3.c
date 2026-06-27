//  Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is isosceles, equilateral, scalene or right-angled triangle.
#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("enter sides of traingle:");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("equilateral triangle");
    }
    else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
    {
        printf("isosceles triangle");
    }
    else if ((a != b && b != c && a != c))
    {
        printf("scalene triangle");
    }
    else if ((a * a) + (b * b) == (c * c))
    {
        printf("right angle triangle");
    }
}