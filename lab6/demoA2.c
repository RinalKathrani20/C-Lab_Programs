#include <stdio.h>
int main()
{ 
    int bs,gs;
    float HRA,DA;
    printf("enter basic salary:");
    scanf("%d",&bs);
    if(bs>=10000 && bs<20000)
    {
        HRA=0.2*bs;
        DA=0.8*bs;
        gs=bs+HRA+DA;
        printf("gross salary=%d",gs);
    }
    else if(bs>=20000 && bs<30000)
    {
        HRA=0.25*bs;
        DA=0.95*bs;
        gs=bs+HRA+DA;
        printf("gross salary=%d",gs);
    }
    else if(bs>=30000)
    {
        HRA=0.15*bs;
        DA=0.90*bs;
        gs=bs+HRA+DA;
        printf("gross salary=%d",gs);
    }
    else
    {
        HRA=0;
        DA=0;
        gs=bs+HRA+DA;
        printf("gross salary=%d",gs);
    }
}
