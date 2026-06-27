#include<stdio.h>

void upper(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }

        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    upper(str);

    printf("Uppercase String = %s",str);

    return 0;
}