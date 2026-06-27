#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("a is largest\n"); 

    }
    else if(b>c)
    {
        printf("b is largest\n");
    }
    else
    {
        printf("c is largest\n");
    }
    }
