//Swap two arrays using pointers. 
#include<stdio.h>
void main()
{
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    int a[n],b[n];
    int *c,*d,cd;
    c=a;
    d=b;

    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        cd=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=cd;
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",a[i],b[i]);
    }
}
