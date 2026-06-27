#include<stdio.h>
int main()
{
    int a,b,c,sum,sub,mul,div;
    
    printf("enter value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("enter a value: 1 for sum, 2 for sub, 3 for mul, 4 for div\n");
    printf("enter c:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            sum=a+b;
            printf("sum=%d",sum);
            break;
        case 2:
            sub=a-b;
            printf("sub=%d",sub);
            break;
        case 3:
            mul=a*b;
            printf("mul=%d",mul);
            break;
        case 4:
            div=a/b;
            printf("div=%d",div);
            break;
    }
}