//Add two distances in feet and inches using structure. 
#include<stdio.h>
struct Distance
{
    int feet;
    int inches;
};
void main()
{
    struct Distance d1,d2,sum;
    printf("enter inch 1:");
    scanf("%d",&d1.feet);
    printf("enter inch 2:");
    scanf("%d",&d2.inches);
    printf("enter feet 1:");
    scanf("%d",&d1.feet);
    printf("enter feet 2:");
    scanf("%d",&d2.feet);
    sum.inches=d1.inches+d2.inches;
    sum.feet=d1.feet+d2.feet;
    while(sum.inches>=12)
    {
        sum.feet++;
        sum.inches-=12;
    }
    printf("Sum of distances: %d feet %d inches", sum.feet, sum.inches);
}
