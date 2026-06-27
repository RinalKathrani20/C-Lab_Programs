//Demonstrate structure pointer.
#include<stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s;
    struct Student *p;

    p = &s;

    printf("Enter Roll No: ");
    scanf("%d",&p->roll);

    printf("Enter Name: ");
    scanf("%s",p->name);

    printf("Enter Marks: ");
    scanf("%f",&p->marks);

    printf("\nStudent Details\n");
    printf("Roll No = %d\n",p->roll);
    printf("Name = %s\n",p->name);
    printf("Marks = %.2f\n",p->marks);

    return 0;
}