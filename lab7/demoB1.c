#include<stdio.h>
int main()
{
    int a,b,c,mul1,mul2,result;
    printf("enter a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    mul1=a*c;
    mul2=b*c;
    result=(a>b)?(mul1):(mul2);
    printf("result=%d",result);
}