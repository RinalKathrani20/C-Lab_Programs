#include<stdio.h>
void main()
{
    int a,rem,rev=0;
    printf("enter a:");
    scanf("%d",&a);
    int temp=a;
    
    while(temp!=0)
    {
        rem=temp%10;//4,6,5
        rev=rev*10+rem;//46
        temp=temp/10;//465,46,4
    }
    if(a==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}