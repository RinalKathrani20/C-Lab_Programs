//Create, declare and initialize structure employee.
#include<stdio.h>
struct Employee{
    char name[100];
    char city[100];
    float salary;
};
void main()
{
    struct Employee e1;
    printf("enter employee information:\n");
    printf("enter employee name:\n");
    gets(e1.name);
    printf("enter employee city:\n");
    gets(e1.city);
    printf("enter employee salary:\n");
    scanf("%f",&e1.salary);
    printf("%s %s %f",e1.name,e1.city,e1.salary);
}