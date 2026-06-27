//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.
#include<stdio.h>
struct Book{
    char title[100];
    char author[100];
    int publishYear;
    float price;
};
void main()
{   
    int i;
    struct Book b1[3];
    for(i=0;i<=2;i++)
    {
    printf("enter title name:");
    scanf("%s",b1[i].title);
    printf("enter author name:");
    scanf("%s",b1[i].author);
    printf("enter publish year:");
    scanf("%d",&b1[i].publishYear);
    printf("enter price:");
    scanf("%f",&b1[i].price);
    
    }
    for(i=0;i<=2;i++)
    {
        printf("%s\n %s\n %d\n %f\n",b1[i].title,b1[i].author,b1[i],b1[i].publishYear,b1[i].price);
    }
}  