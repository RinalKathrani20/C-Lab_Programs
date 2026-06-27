#include<stdio.h>
void findmaxandmin(int a,int b);
void main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    findmaxandmin(a,b);
}
void findmaxandmin(int a,int b)
{
    printf("max=%d\n",a>b?a:b);
    printf("min=%d\n",a<b?a:b);
}

