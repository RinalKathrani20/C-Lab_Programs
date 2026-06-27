#include<stdio.h>
void simpinterest(int r,int p,int t);
void main()
{
    int r,p,t;
    printf("enter r,p,t:");
    scanf("%d %d %d",&r,&p,&t);
    simpinterest(r,p,t);
}
void simpinterest(int r,int p,int t)
{
    printf("simple interest=%d",(r*p*t)/100);
}