#include <stdio.h>

int main()
{
    int n, i, k = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[k - 1])
        {
            arr[k] = arr[i];
            k++;
        }
    }

    printf("Unique elements:\n");

    for (i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nNumber of unique elements = %d", k);

    return 0;
}