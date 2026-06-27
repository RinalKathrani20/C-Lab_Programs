// count of even numbers of 10 numbers
#include<stdio.h>
int main()
{
    int a,i=1,count=0,count2=0;
    
    while(i<=10)
    {
        printf("enter a:");
        scanf("%d",&a);
        if(i%2==0)
    {
        count=count+1;
    }
    else
    {
        count2=count2+1;
    }
        i=i+1;
    }

     printf("Count of even numbers is %d\n",count);
     printf("Count of odd numbers is %d\n",count2);
    return 0;
}