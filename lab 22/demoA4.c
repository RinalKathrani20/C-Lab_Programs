#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char ch;

    fp1=fopen("file1.txt","a");
    fp2=fopen("file2.txt","r");

    while((ch=fgetc(fp2))!=EOF)
    {
        fputc(ch,fp1);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File Appended Successfully.");

    return 0;
}