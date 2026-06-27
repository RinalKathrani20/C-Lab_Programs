#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,per;
    printf("enter the marks of 5 subjects");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    per=((s1+s2+s3+s4+s5)*100)/500;
    printf("percentage=%d\n",per);
    if(per>=70)
    {
        printf("distinction\n");

    }
    else if(per>=60 && per<70)
    {
        printf("first class\n");

    }
    else if(per>=45 && per<60)
    { 
        printf("second class\n");
    }
    else if(per>35 && per<45)
    {
        printf("pass class\n");
    }
    else
    {
        printf("fail\n");
    }
}

