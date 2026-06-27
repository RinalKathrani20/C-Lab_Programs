#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp=fopen("demo.txt","r");

    if(fp==NULL)
    {
        printf("File not found.");
        return 0;
    }

    fseek(fp,-1,SEEK_END);

    while(ftell(fp)>0)
    {
        ch=fgetc(fp);
        printf("%c",ch);

        fseek(fp,-2,SEEK_CUR);
    }

    ch=fgetc(fp);
    printf("%c",ch);

    fclose(fp);

    return 0;
}