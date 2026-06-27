//Using a String pointer remove a space and special character from string.
#include<stdio.h>

int main()
{
    char str[100];
    char *p,*q;

    printf("Enter a string: ");
    gets(str);

    p=str;
    q=str;

    while(*p!='\0')
    {
        if((*p>='A' && *p<='Z') || (*p>='a' && *p<='z') || (*p>='0' && *p<='9'))
        {
            *q=*p;
            q++;
        }

        p++;
    }

    *q='\0';

    printf("String after removing spaces and special characters:\n%s",str);

    return 0;
}