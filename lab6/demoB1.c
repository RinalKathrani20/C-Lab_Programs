#include <stdio.h>
int main()
{
    int a;
    float bill, total;
    printf("enter a: ");
    scanf("%d", &a);

    if (a <= 50)
    {
        bill = a * 0.5;
    }
    else if (a <= 150)
    {
        bill = 25 + ((a - 50) * 0.75);
    }
    else if (a <= 250)
    {
        bill = 100 + ((a - 150) * 1.2);
    }
    else
    {
        bill = 220 + ((a - 250) * 1.5);
    }
    total = bill + bill * 0.20;
    printf("electricity bill=Rs %.2f", total);
}