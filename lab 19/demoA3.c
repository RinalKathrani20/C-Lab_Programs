#include<stdio.h>
#include<string.h>
void main()
{
    char a[50]="hello";
    char aa[60]="hello!";

    printf("length of string 1:%d\n",strlen(a));
    printf("length of string 1:%d\n",strlen(aa));

    printf("%c",strcmp(a,aa));

    printf("%s",strcpy(a,aa));

    printf("%s",strcat(a,aa));
    
    printf("%s",strrev(a));

    printf("%s",strlwr(a));

    printf("%s",strupr(aa));
}
