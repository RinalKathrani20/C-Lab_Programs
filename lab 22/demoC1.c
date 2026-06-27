#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int flag=1;

    fp=fopen("demo.txt","r+");

    if(fp==NULL)
    {
        printf("File not found.");
        return 0;
    }

    while((ch=fgetc(fp))!=EOF)
    {
        if(flag && ch>='a' && ch<='z')
        {
            fseek(fp,-1,SEEK_CUR);
            fputc(ch-32,fp);
            fseek(fp,0,SEEK_CUR);
        }

        if(ch==' ' || ch=='\n' || ch=='\t')
            flag=1;
        else
            flag=0;
    }

    rewind(fp);

    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }

    fclose(fp);

    return 0;
}