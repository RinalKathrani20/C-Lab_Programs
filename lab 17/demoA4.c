#include<stdio.h>
void main()
{
    int a=2,b=3;
    int temp,*c,*d;
    c=&a;
    d=&b;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("a=%d b=%d",a,b);
}