//calculate simple interest
#include<stdio.h>
void main()
{
    float p,t,r,SI;
    printf("enter principal,rate,time period:");
    scanf("%f %f %f",&p,&r,&t);

    SI=(p*r*t)/100;
    printf("simple interest:%f",SI);
}