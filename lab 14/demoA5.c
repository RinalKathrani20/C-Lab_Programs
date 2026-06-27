//Read five person height and weight and count the number of person having height greater than 170 and 
//weight less than 50.
#include<stdio.h>
void main()
{
    int h[5],w[5],i,count=0;
    for(i=0;i<5;i++)
    {
        printf("enter height:");
        scanf("%d",&h[i]);
        printf("enter weight:");
        scanf("%d",&w[i]);
    }
    for(i=0;i<5;i++)
    {
        if(h[i]>170 && w[i]<50)
        {
            count=count+1;
        }
    }
    printf("count=%d",count);
}
    

