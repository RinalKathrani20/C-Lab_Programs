#include<stdio.h>
void main()
{
    int i=1,sq,avg;
    int count=0,sum=0;
    while(count<10)
    {
        sq=i*i;
        if(sq%10==3)
        {
            count++;
            sum=sum+sq;
        }
        i++;
    }
    printf("sum=%d",sum);
    avg=(float)sum/10;
    printf("\nAverage=%.2f",avg);
}