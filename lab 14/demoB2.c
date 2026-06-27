#include<stdio.h>
#include<math.h>

int main()
{
    int arr[100], n, i;
    int sum = 0;
    float avg, gm, hm;
    float product = 1;
    float reciprocal = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        sum = sum + arr[i];
        product = product * arr[i];
        reciprocal = reciprocal + (1.0 / arr[i]);
    }

    avg = (float)sum / n;
    gm = pow(product, 1.0 / n);
    hm = n / reciprocal;

    printf("Average = %.2f\n", avg);
    printf("Geometric Mean = %.2f\n", gm);
    printf("Harmonic Mean = %.2f\n", hm);

    return 0;
}