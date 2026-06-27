#include <stdio.h>

void main()
{
    int i, k, n, fact;
    float sum = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++)
    {
        fact = 1;

        for (i = 1; i <= k; i++)
        {
            fact = fact * i;
        }

        sum = sum + (1.0 / fact);
    }

    printf("Value of e = %f", sum);
}
