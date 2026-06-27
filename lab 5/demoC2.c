 #include <stdio.h>
int main()
{
    int a;
    printf("enter a value:");
    scanf("%d", &a);

    if((a&1)==0) //if a=3 means 3=11 in binary and 1=01 in binary so 11&01=01(1) means odd (in short 3=11 last bit is 1 means odd) 
                 //if a=4 means 4=100 in binary and 1=001 in binary so 100&001=000(0) means even (in short 4=100 last bit is 0 means even)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
}