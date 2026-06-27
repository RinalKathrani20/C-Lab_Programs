#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n,i,sum=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    arr=(int *)calloc(n,sizeof(int));

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    printf("Sum = %d",sum);

    free(arr);

    return 0;
}