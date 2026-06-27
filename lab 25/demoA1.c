#include <stdio.h>

void removeStars(char *s, char *result)
{
    char str[100];
    int top = -1;
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '*')
        {
            if (top >= 0)
            {
                top--;
            }
        }
        else
        {
            str[++top] = s[i];
        }
    }

    for (i = 0; i <= top; i++)
    {
        result[i] = str[i];
    }

    result[top + 1] = '\0';
}

int main()
{
    char s[100], result[100];

    printf("Enter string: ");
    scanf("%s", s);

    removeStars(s, result);

    printf("Result = %s", result);

    return 0;
}