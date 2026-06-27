#include<stdio.h>
void main()
{
    int a=5;
    int *ptr;
    ptr=&a;
    printf("%d %d",ptr,*ptr);
}