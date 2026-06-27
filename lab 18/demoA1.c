#include<stdio.h>
void add(int a,int b);
void main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    add(a,b);

}
void add(int a,int b)
{
    printf("sum=%d",a+b);
}
