#include<stdio.h>

int main()
{
    int arr[100], *p;
    int n, i, j, temp;

    printf("Enter size: ");
    scanf("%d",&n);

    p=arr;

    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }

    printf("Sorted array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }

    return 0;
}