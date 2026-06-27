#include<stdio.h>
void main()
{
    int i;

    for(i=101;i<200;i++)
    {
        if(i%7==0 && i%5!=0)
        {
            printf("%d ",i);
        }
    }
}