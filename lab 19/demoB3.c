#include<stdio.h>

void swapArray(int a[],int b[],int n)
{
    int i,temp;

    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}

int main()
{
    int a[100],b[100],n,i;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter first array:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter second array:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    swapArray(a,b,n);

    printf("First Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nSecond Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}