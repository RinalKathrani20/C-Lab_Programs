#include<stdio.h>

int main()
{
    int n, i, j, val;

    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d",&val);

    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            for(j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }

            n--;
            i--;
        }
    }

    printf("Array after removing %d:\n",val);

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nNumber of remaining elements (k) = %d",n);

    return 0;
}