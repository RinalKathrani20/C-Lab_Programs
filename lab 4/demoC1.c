//Convert seconds into hours, minutes & seconds and print in HH:MM: SS. [e.g. 10000 seconds = 
//02:46:40)] 
#include<stdio.h>
void main()
{
    int hh=00,mm=00,ss=00,sec;
    printf("enter seconds:");
    scanf("%d",&sec);

    while(sec!=0)
    {
    if(sec>=3600)
    {
        hh++;
        sec=sec-3600;
    }
    else if(sec>=60)
    {
        mm++;
        sec=sec-60;
    }
    else
    {
        ss++;
        sec=sec-1;
    }
    }
    printf("%d:%d:%d",hh,mm,ss);
} 