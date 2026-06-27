#include<stdio.h>
void main()
{
    int a=5;
    float b=5.0000;
    char c='a';
    double d=3.00000000;
    int *p=&a;
    float *pt=&b;
    char *ptr=&c;
    double *r=&d;

    printf("%d %d\n",a,p);
    printf("%f %d\n",b,pt);
    printf("%c %d\n",c,ptr);
    printf("%lf %d\n",d,r);
    
}