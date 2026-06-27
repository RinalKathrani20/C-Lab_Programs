//find max min sum average of given number from array
#include<stdio.h>
void main()
{
    int n;
    printf("enter size:");//3
    scanf("%d",&n);
    int a[n],i,max,min,sum=0;
    float average;

    for(i=0;i<n;i++)
    {
    printf("enter number:");// 1 2 3 
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        max=a[0];
        max=max>a[i]?max:a[i];
        min=a[0];
        min=min<a[i]?min:a[i];
        sum=sum+a[i];
        average=sum/n;
    }
    printf("%d\n",max);
    printf("%d\n",min);
    printf("%d\n",sum);
    printf("%.2f\n",average);
}
