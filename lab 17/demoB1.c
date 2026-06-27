#include<stdio.h>
void main()
{
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    int a[n],b[n];
    int *ptr,*abc;
    ptr=a;
    abc=b;


    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        *(b+i)=*(a+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}