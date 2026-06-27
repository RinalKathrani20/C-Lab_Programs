//using recursive function
#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int factorial=fact(n);
    printf("Factorial of %d=%d",n,factorial);

}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}