// Add two times hh, mm and ss using structure. 
#include<stdio.h>
struct Time
{
    int hours;
    int minutes;
    int seconds;
};
void main()
{
    int i,sum1,sum2,sum3;
    struct Time hh[i],mm[i],ss[i];
    for(i=0;i<2;i++)
    {
    printf("enter hour:");
    scanf("%d",&hh[i].hours);
    printf("enter minute:");
    scanf("%d",&mm[i].minutes);
    printf("enter seconds:");
    scanf("%d",ss[i].seconds);

    sum1=hh[0].hours+hh[1].hours;
    sum2=mm[0].minutes+mm[1].minutes;
    sum3=ss[0].seconds+ss[1].seconds;
    }
    while(sum3>=60)
    {
        sum2++;
        sum3-=60;
    }
    while(sum2>=60)
    {
        sum1++;
        sum2-=60;
    }
    printf("%d %d %d",sum1,sum2,sum3);
}

