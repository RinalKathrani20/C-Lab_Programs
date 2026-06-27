#include<stdio.h>

int main()
{
    FILE *fp;
    char ch,name[20];
    int age;

    fp=fopen("demo.txt","w+");

    fprintf(fp,"%s %d","Rinal",20);

    rewind(fp);

    fscanf(fp,"%s%d",name,&age);

    printf("%s %d\n",name,age);

    fseek(fp,0,SEEK_END);

    fputc('A',fp);

    rewind(fp);

    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }

    fclose(fp);

    return 0;
}