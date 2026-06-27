//Create structure student with name, percentage and age. Read data of 5 students using array of structure
#include<stdio.h>
struct student{
    char name[100];
    float percentage;
    int age;
};
void main()
{
    struct student s1[5];
    
    int i;
    for(i=0;i<5;i++)
    {
    printf("enter name:");
    scanf("%s",s1[i].name);
    printf("enter percentage:");
    scanf("%f",&s1[i].percentage);
    printf("enter age:");
    scanf("%d",&s1[i].age);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",s1[i].name);
        printf("%f\n",s1[i].percentage);
        printf("%d\n",s1[i].age);
    }
}