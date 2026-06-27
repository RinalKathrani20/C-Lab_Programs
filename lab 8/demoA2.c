#include<stdio.h>
int main()
{
   int i=1,n;
   printf("enter n:");
   scanf("%d",&n);
   while(i<=n)
   {
    printf("%d",i);
    i=i+2;
   }
  return 0;
}