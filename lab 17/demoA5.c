#include<stdio.h>

void main()
{
    int *p;
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    p = arr;

    printf("Enter array elements:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", p+i);
    }

    printf("Array elements are:\n");

    for(i=0; i<n; i++)
    {
        printf("%d ", *(p+i));
    }
}