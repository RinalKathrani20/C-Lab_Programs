//Create, open and close a file.
#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("demo.txt","w");

    if(fp==NULL)
    {
        printf("File cannot be created.");
        return 0;
    }

    printf("File created successfully.");

    fclose(fp);

    printf("\nFile closed.");

    return 0;
}