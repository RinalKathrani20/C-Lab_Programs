#include<stdio.h>

int main()
{
    int n, i;
    int first, second;

    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(arr[0]>arr[1])
    {
        first=arr[0];
        second=arr[1];
    }
    else
    {
        first=arr[1];
        second=arr[0];
    }

    for(i=2;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            second=arr[i];
        }
    }

    printf("Largest = %d\n",first);
    printf("Second Largest = %d",second);

    return 0;
}