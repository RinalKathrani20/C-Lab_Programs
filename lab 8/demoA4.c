#include<stdio.h>
int main()
{
    int a,i=1,sum=0;
    printf("Enter a: ");
    scanf("%d",&a);
    while(i<=a)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("Sum of 1 to n numbers is %d\n",sum);
    return 0;
}