#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char name[20];
    int rollno;
    int backlog;
};

int main()
{
    int n,i;
    struct Student s;
    FILE *fp;

    fp=fopen("student.txt","w");

    if(fp==NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter name: ");
        scanf("%s",s.name);

        printf("Enter roll number: ");
        scanf("%d",&s.rollno);

        printf("Enter backlogs: ");
        scanf("%d",&s.backlog);

        fprintf(fp,"%s %d %d\n",s.name,s.rollno,s.backlog);
    }

    fclose(fp);

    fp=fopen("student.txt","r");

    if(fp==NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudents having more than 5 backlogs:\n");

    while(fscanf(fp,"%s %d %d",s.name,&s.rollno,&s.backlog)!=EOF)
    {
        if(s.backlog>5)
        {
            printf("Roll Number = %d\n",s.rollno);
        }
    }

    fclose(fp);

    return 0;
}