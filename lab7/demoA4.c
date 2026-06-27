#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:"); 
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
(a>b)?((a>c)?printf("a is largest"):printf("c is largest")):(b>c)?printf("b is largest"):printf("c is largest");
}