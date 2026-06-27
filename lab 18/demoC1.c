#include<stdio.h>

void length(char str[])
{
    int i=0;

    while(str[i]!='\0')
        i++;

    printf("Length = %d\n",i);
}

void copy(char str1[],char str2[])
{
    int i=0;

    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }

    str2[i]='\0';

    printf("Copied String = %s\n",str2);
}

void concatenate(char str1[],char str2[])
{
    int i=0,j=0;

    while(str1[i]!='\0')
        i++;

    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }

    str1[i]='\0';

    printf("Concatenated String = %s\n",str1);
}

void compare(char str1[],char str2[])
{
    int i=0;

    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    {
        i++;
    }

    if(str1[i]==str2[i])
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");
}

int main()
{
    int choice;
    char str1[100],str2[100];

    printf("Enter First String: ");
    scanf("%s",str1);

    printf("Enter Second String: ");
    scanf("%s",str2);

    do
    {
        printf("\nMenu\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                length(str1);
                break;

            case 2:
                copy(str1,str2);
                break;

            case 3:
                concatenate(str1,str2);
                break;

            case 4:
                compare(str1,str2);
                break;

            case 5:
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=5);

    return 0;
}