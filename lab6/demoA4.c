#include <stdio.h>
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    a=a%10;
    if(a%2==0)
    {
        printf("last digit is even");
    }
    else{
        printf("last digit is odd");
    }
}