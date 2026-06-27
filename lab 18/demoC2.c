#include<stdio.h>

void oneDigit(int n)
{
    switch(n)
    {
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

void twoDigit(int n)
{
    if(n>=10 && n<=19)
    {
        switch(n)
        {
            case 10: printf("Ten "); break;
            case 11: printf("Eleven "); break;
            case 12: printf("Twelve "); break;
            case 13: printf("Thirteen "); break;
            case 14: printf("Fourteen "); break;
            case 15: printf("Fifteen "); break;
            case 16: printf("Sixteen "); break;
            case 17: printf("Seventeen "); break;
            case 18: printf("Eighteen "); break;
            case 19: printf("Nineteen "); break;
        }
    }
    else
    {
        switch(n/10)
        {
            case 2: printf("Twenty "); break;
            case 3: printf("Thirty "); break;
            case 4: printf("Forty "); break;
            case 5: printf("Fifty "); break;
            case 6: printf("Sixty "); break;
            case 7: printf("Seventy "); break;
            case 8: printf("Eighty "); break;
            case 9: printf("Ninety "); break;
        }

        oneDigit(n%10);
    }
}

int main()
{
    int n;

    printf("Enter Amount (0-9999): ");
    scanf("%d",&n);

    if(n>=1000)
    {
        oneDigit(n/1000);
        printf("Thousand ");
        n=n%1000;
    }

    if(n>=100)
    {
        oneDigit(n/100);
        printf("Hundred ");
        n=n%100;
    }

    if(n>=10)
        twoDigit(n);
    else
        oneDigit(n);

    return 0;
}