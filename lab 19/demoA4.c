//Find a character from given string.
#include<stdio.h>
void findchar(char str[],char ch);
void main()
{
    int n,i;
    char ch;
    printf("enter size:");
    scanf("%d",&n);
    char str[n];
    printf("enter string:");
    scanf("%s",str);
    printf("enter character:");
    scanf(" %c",&ch);
    findchar(str,ch);
}
void findchar(char str[],char ch)
{
    int i;
    int found=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("character found at position %d\n",i);
            found=1;
        }
    }
        if(found==0)
        {
            printf("none\n");
        }
}