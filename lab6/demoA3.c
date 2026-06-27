#include <stdio.h>
int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z'))
    {
        printf("lowercase");
    }
    else if (ch>='A' && ch<='Z') 
    {
        printf("uppercase");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("digit");
    }
    else
    {
        printf("special character");
    }
}