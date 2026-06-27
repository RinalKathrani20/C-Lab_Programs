#include<stdio.h>
int main()
{
    char c1='a',c2='A';
    int i=1;
    while(i<=26)
    {
        if(c1>='a' && c1<='z')
        {
            printf("%c\n",c1);
        }
        if(c2<='Z' && c2>='A')
        {
            printf("%c\n",c2);
        }
        i++;
        c1++;
        c2++;
    }
    return 0;
}
