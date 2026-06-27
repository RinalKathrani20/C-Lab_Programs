#include<stdio.h>
void printarray(int array[],int n);
void main()
{
    int n,i;
    printf("enter size:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&array[i]);
    }
    printarray(array,n);
}
void printarray(int array[],int n)
{
    int i; 
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}