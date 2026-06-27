#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter a number: ");
    scanf("%d",&a);

    do{
        if(i%2!=0)
        {
            printf("%d\n",i);
            i=i+1;
        }
    }while(i<=a);
    return 0;
}
