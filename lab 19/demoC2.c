#include<stdio.h>

int fact(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }

    return f;
}

int main()
{
    int n,r;
    int ncr,npr;

    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);

    ncr=fact(n)/(fact(r)*fact(n-r));
    npr=fact(n)/fact(n-r);

    printf("nCr = %d\n",ncr);
    printf("nPr = %d",npr);

    return 0;
}