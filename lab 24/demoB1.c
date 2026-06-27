#include<stdio.h>

int main()
{
    int nums[100], ans[200];
    int n, i;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }

    for(i=0;i<n;i++)
    {
        ans[i]=nums[i];
    }

    for(i=0;i<n;i++)
    {
        ans[i+n]=nums[i];
    }

    printf("Concatenated Array:\n");

    for(i=0;i<2*n;i++)
    {
        printf("%d ",ans[i]);
    }

    return 0;
}