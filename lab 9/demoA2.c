#include<stdio.h>
void main()
{
    int a,mult,i=1;
    printf("enter a:");
    scanf("%d",&a);
    while(i<=10)
    {
        mult=a*i;
        printf("%d*%d=%d\n",a,i,mult);
        i=i+1;
    }
}
