#include<stdio.h>

int main()
{
    int n, i, value, pos;

    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter sorted elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter new value: ");
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(arr[i]>value)
        {
            pos=i;
            break;
        }
    }

    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=value;
    n++;

    printf("Array after insertion:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}