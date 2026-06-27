//Replace a character in given string. 
#include<stdio.h> 
void replacestr(char a[],char b,char c);
void main()
{
    char a[50]="string";
    char b;             //old char
    char c;             //new char
    printf("enter character:");
    scanf(" %c", &b);
    printf("enter character to replace with:");
    scanf(" %c", &c);
    replacestr(a, b, c);
}

void replacestr( char a[], char b,char c)
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)
        {
            a[i]=c;
        }
    }
    printf("New string is:%s\n",a);
}
