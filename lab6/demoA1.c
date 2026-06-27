#include <stdio.h>
int main()
{
    int a,b,c,sum,diff,divide,product;
    printf("enter two values:");
    scanf("%d %d", &a,&b);
    printf("1.addition, 2.substraction,3.multiplication,4.division\n");
    printf("enter choice:");
    scanf("%d", &c);

    if(c==1)
    {
        sum=a+b;
       printf("sum=%d",sum);
    }
    else if(c==2)
    {
       diff=a-b;
       printf("difference=%d",diff);
    }
    else if(c==3)
    {
        product=a*b;
        printf("product=%d",product);
    }
    else{
        divide=a/b;
        printf("division=%d",divide);
    }
    
}