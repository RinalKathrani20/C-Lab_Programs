#include<stdio.h>

int main()
{
    int n, i, j;

    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter sorted elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Missing numbers are:\n");

    for(i=0;i<n-1;i++)
    {
        for(j=arr[i]+1;j<arr[i+1];j++)
        {
            printf("%d ",j);
        }
    }

    return 0;
}