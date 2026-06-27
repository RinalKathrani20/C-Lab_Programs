#include<stdio.h>

int main()
{
    char str[100], *p;
    int len=0;

    printf("Enter a string: ");
    gets(str);

    p=str;

    while(*p!='\0')
    {
        len++;
        p++;
    }

    printf("Length = %d",len);

    return 0;
}