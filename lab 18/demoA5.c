#include<stdio.h>
void swap(int a,int b);
void main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    swap(a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}