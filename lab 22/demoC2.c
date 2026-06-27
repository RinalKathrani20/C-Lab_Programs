#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char line[200];
    int lineNo=0;

    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");

    if(fp1==NULL)
    {
        printf("File not found.");
        return 0;
    }

    while(fgets(line,200,fp1)!=NULL)
    {
        if(line[0]=='\n')
            continue;

        fputs(line,fp2);

        lineNo++;

        if(lineNo==3)
        {
            fputs("\n",fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    printf("Operation Completed.");

    return 0;
}