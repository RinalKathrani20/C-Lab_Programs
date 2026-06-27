//Input a string in character array and print string and length of string.
#include<stdio.h>
#include<string.h>
void main()
{
   int len;
   char s[100];
   printf("enter string:");
   scanf("%s",s);

   len=strlen(s);
   printf("length of string=%d",len);

}