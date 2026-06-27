// x^y
#include<stdio.h>
void main()
{
    int x,y,i=1,a=1;
    printf("enter x and y:");
    scanf("%d%d",&x,&y);

    while(i<=y)
    {
        a=a*x;
        i=i+1;
    }
    printf("result=%d",a);
}