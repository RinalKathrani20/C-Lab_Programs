#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int newWord=1;

    fp=fopen("demo.txt","r+");

    if(fp==NULL)
    {
        printf("File not found.");
        return 0;
    }

    while((ch=fgetc(fp))!=EOF)
    {
        if(newWord && ch>='a' && ch<='z')
        {
            fseek(fp,-1,SEEK_CUR);
            fputc(ch-32,fp);
            fseek(fp,0,SEEK_CUR);
        }

        if(ch==' ' || ch=='\n' || ch=='\t')
            newWord=1;
        else
            newWord=0;
    }

    rewind(fp);

    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }

    fclose(fp);

    return 0;
}