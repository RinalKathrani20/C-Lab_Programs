#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int chars=0,spaces=0,tabs=0,lines=0;

    fp=fopen("demo.txt","r");

    if(fp==NULL)
    {
        printf("File not found.");
        return 0;
    }

    while((ch=fgetc(fp))!=EOF)
    {
        chars++;

        if(ch==' ')
            spaces++;

        if(ch=='\t')
            tabs++;

        if(ch=='\n')
            lines++;
    }

    fclose(fp);

    printf("Characters = %d\n",chars);
    printf("Spaces = %d\n",spaces);
    printf("Tabs = %d\n",tabs);
    printf("New Lines = %d\n",lines);

    return 0;
}