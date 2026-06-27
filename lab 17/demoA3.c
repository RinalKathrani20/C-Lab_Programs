#include<stdio.h>
void main()
{
    int a=2,b=3;
    int *sum,*d,*e;
    d=&a;
    e=&b;
    *sum=*d+*e;
    printf("sum=%d",*sum);
}
