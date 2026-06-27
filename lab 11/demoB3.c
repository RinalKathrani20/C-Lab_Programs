#include<stdio.h>
void main()
{
    int i;

    printf("ASCII value\tCharacter");
    for(i=0;i<=127;i++)
    {
        printf("%d\t%c\n",i,i);
    }
}