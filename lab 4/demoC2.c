//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days] 
#include<stdio.h>
void main()
{
    int yy=0,ww=0,dd=0,days;
    printf("Enter Days:");
    scanf("%d",&days);

    while(days!=0)
    {
        if(days>=365)
        {
            yy++;
            days=days-365;
        }
        else if(days>=7)
        {
            ww++;
            days=days-7;
        }
        else
        {
            dd++;
            days=days-1;
        }
        
    }
    printf("%d year,%d week,%d days",yy,ww,dd);
}