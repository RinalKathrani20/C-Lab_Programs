//without using temp
#include<stdio.h>
int main()
{
    int a,b; //a=2,b=3
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b); 

    a=a+b; //a=5, b=3
    b=a-b;
    a=a-b;

    printf("after swap, value of a=%d\n",a);
    printf("after swap, value of b=%d\n",b);
}