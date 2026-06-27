#include<stdio.h>
void main()
{
    int a,i=1,count=0;
    printf("enter a number:");//6
    scanf("%d",&a);
    while(i<=a)
    {
        if(a%i==0)//6%1==0
        {
             count=count+1;
        }
        i++;
    }
        if(count==2)
        {
            printf("prime number");
        }
        else
        {
            printf("composite number");
        }
}
