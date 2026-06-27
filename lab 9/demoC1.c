#include<stdio.h>

int main()
{
    int n, rev=0, rem;

    char *word[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    printf("Enter a number: ");
    scanf("%d",&n);

    // Reverse the number
    while(n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    // Print digits in words
    while(rev>0)
    {
        rem = rev % 10;
        printf("%s ", word[rem]);
        rev = rev / 10;
    }

    return 0;
}