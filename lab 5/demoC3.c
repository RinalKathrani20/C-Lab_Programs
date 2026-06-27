#include<stdio.h>
int main()
{
    int n,mult;
    printf("enter n: ");//n=5 
    scanf("%d",&n);

    if(n!=0)
    {
        mult=n<<1; //n will get multiply by 2(2^1=2) so n<<'1'>
        printf("%d",mult);
    }
    else
    {
        printf("n is zero");

    }
}