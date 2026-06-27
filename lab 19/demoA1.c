//Find factorial of a number using function and recursive function. 
#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int ans = fact(n);
    printf("factorial:%d",ans);
}
int fact(int n)
{
    int i,x=1;
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    return x;
}
