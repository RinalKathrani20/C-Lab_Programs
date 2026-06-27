#include<stdio.h>
void main()
{
    int a,sum=0,avg,i=1,n;
    printf("enter a number:");
    scanf("%d",&a);
    while(i<=a)
    {
        printf("enter a number:");
        scanf("%d",&n);

            sum=sum+n;
            i++;
    }
    avg=sum/a;
    printf("sum is %d\n",sum);
    printf("average is %d",avg);

}