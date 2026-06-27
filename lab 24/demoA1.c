#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ip;
    char *cp;
    float *fp;

    ip = (int *)malloc(sizeof(int));
    cp = (char *)malloc(sizeof(char));
    fp = (float *)malloc(sizeof(float));

    printf("Enter an integer: ");
    scanf("%d", ip);

    printf("Enter a character: ");
    scanf(" %c", cp);

    printf("Enter a float: ");
    scanf("%f", fp);

    printf("\nInteger = %d\n", *ip);
    printf("Character = %c\n", *cp);
    printf("Float = %.2f\n", *fp);

    free(ip);
    free(cp);
    free(fp);

    printf("\nMemory De-allocated Successfully.");

    return 0;
}