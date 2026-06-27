#include<stdio.h>
#include<math.h>
void main()
{
    int i;
    printf("Number\tSquare Root\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\t%.2f\n",i,sqrt(i));
    }
}