#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    int n,i;

    printf("Enter string: ");
    gets(str1);

    printf("Enter number of characters: ");
    scanf("%d",&n);

    for(i=0;i<n && str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }

    str2[i]='\0';

    printf("Copied String = %s",str2);

    return 0;
}