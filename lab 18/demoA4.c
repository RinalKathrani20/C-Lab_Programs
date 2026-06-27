#include<stdio.h>
void maxandmin(int a,int b,int c);
void main()
{
    int a,b,c,max;
    printf("enter three floating point values:");
    scanf("%f %f %f",&a,&b,&c);
    maxandmin(a,b,c);
}
void maxandmin(int a,int b,int c)
{
    int max;
    max=(a>b)?((a>c)?printf("a is maximum"):printf("c is maximum")):((b>c)?printf("b is maximum"):printf("c is maximum"));
}