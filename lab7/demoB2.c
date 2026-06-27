#include<stdio.h>
int main()
{
    char c;
    printf("enter a character: ");
    scanf("%c",&c);
    (c>='a' && c<='z'|| c>='A' && c<='Z')?printf("alphabet"):printf("not alphabet");
}