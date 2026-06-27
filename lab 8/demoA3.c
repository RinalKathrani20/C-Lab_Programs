#include<stdio.h>
void main()
{
    int i,a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);

    i=a;
    while(i<=b)
    {
        if(i%2==0)
    {
        printf("%d\n",i);
    }
    i++;
}
}