//  fibonacci series= 0+1+1+2+3+5+8+13+....n
#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,fab;
    printf("enter a number:");//5
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
    
        fab=a+b;//1,2
        a=b;//1,
        b=fab;//1
    }
   

}