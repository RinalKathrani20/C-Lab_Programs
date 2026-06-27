#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    int n,i;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Enter number of characters: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("Strings are Not Equal");
            return 0;
        }
    }

    printf("Strings are Equal");

    return 0;
}