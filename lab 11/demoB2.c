#include<stdio.h>
void main()
{
    int n,rem,count=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    printf("enter a number:");//3113
    scanf("%d",&n);
    for(;n>0;)
    {
        rem=n%10;
        n=n/10;
    if(rem==0)
    {
        count++;
    }
    else if(rem==1)
    {
        count1++;
    }
    else if(rem==2)
    {
        count2++;
    }
    else if(rem==3)
    {
        count3++;
    }
    else if(rem==4)
    {
        count4++;
    }
    else if(rem==5)
    {
        count5++;
    }
    else if(rem==6)
    {
        count6++;
    }
    else if(rem==7)
    {
        count7++;
    }
    else if(rem==8)
    {
        count8++;
    }
    else if(rem==9)
    {
        count9++;
    }
}
    printf("%d\n",count);
    printf("%d\n",count1);
    printf("%d\n",count2);
    printf("%d\n",count3);
    printf("%d\n",count4);
    printf("%d\n",count5);
    printf("%d\n",count6);
    printf("%d\n",count7);
    printf("%d\n",count8);
    printf("%d\n",count9);
}


