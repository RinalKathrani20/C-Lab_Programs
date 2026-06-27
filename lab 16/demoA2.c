//Count number of positive, negative and zero elements from 3 X 3 matrix. 
#include<stdio.h>
void main()
{
    int arr[3][3],c=0,c1=0,c2=0;
    int i,j;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("enter elements:");
        scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if(arr[i][j]>0)
        {
            c=c+1;
        }
        else if(arr[i][j]<0)
        {
            c1=c1+1;
        }
        else
        {
            c2=c2+1;
        }
        }
    }
    printf("no. of positive elements=%d\n",c);
    printf("no. of negaive elements=%d\n",c1);
    printf("no. of zero elements=%d\n",c2);
    }
