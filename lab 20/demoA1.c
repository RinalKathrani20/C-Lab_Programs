//Find weather given string is palindrome or not.
#include<stdio.h>
void main()
{
    char str[50]="madam";
    int i,rem;
    int len=0,flag=0;
    //calculate length of string    
    while(str[len]!='\0')
    {
        len++;//5
    }
    for(i=0;i<len;i++)//0,1,2
    {
        if(str[i]!=str[len-i-1])//4,3,2 
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The given string is palindrome");
    }
    else
    {
        printf("The given string is not palindrome");
    }
}
