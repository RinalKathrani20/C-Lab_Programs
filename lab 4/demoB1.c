//Print area of triangle. ((height*base)/2)  
#include<stdio.h>
void main()
{
    int h,b;
    printf("Enter height and base:");
    scanf("%d %d",&h,&b);
    float area=h*b*0.5;

    printf("Area of triangle:%f",area);
}