#include<stdio.h>

int main()
{
    FILE *fp1,*fp2,*fp3;
    char line1[100],line2[100];

    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","r");
    fp3=fopen("merge.txt","w");

    while(fgets(line1,100,fp1)!=NULL || fgets(line2,100,fp2)!=NULL)
    {
        if(!feof(fp1))
            fputs(line1,fp3);

        if(!feof(fp2))
            fputs(line2,fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files Merged Successfully.");

    return 0;
}