// Find the second largest number among three user input numbers.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c)
    {
        printf("All three numbers are equal so second largest does not exist");
    }
    else if(a==b ||b==c || c==a)
    {
        printf("Two numbers are equal so second largest number does not exist");
    }
    else{
    if(a>b && a>c)
    {
        if (b>c)
        {
            printf("b is second largest number:%d",b);
        }
        else{
            printf("c is second largest:%d",c);
        }
    }
     if(b>a && b>c)
    {
        if(a>c)
        {
            printf("a is second largest:%d",a);
        }
        else {
            printf("c is second largest:%d",c);
        }
    }
     if(c>a && c>b)
    { 
        if(b>a)
        {
            printf("b is second largest:%d",b);
        }
        else{
            printf("a is second largest:%d",a);
        }
    }
}
}