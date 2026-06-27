#include<stdio.h>
void main()
{
    char c;
    printf("enter character from a to z\n");
    printf("enter a character: ");
    scanf("%c",&c);

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
}