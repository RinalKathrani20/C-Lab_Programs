//Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9) 
#include<stdio.h>
void main()
{
    int c,f;
    printf("enter temperature in farenheit:");
    scanf("%d",&f);

    c=((f-32)*5)/9;
    printf("Temperature in celsius is:%d",c);
}