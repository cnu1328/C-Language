#include <stdio.h>

struct cat
{
    char name[20],colour[20];
    float height,price;
    int age;
};

void main()
{
    struct cat c;
    printf("Enter cat name : ");
    scanf("%s",c.name);
    printf("Enter colour of the cat : ");
    scanf("%s",c.colour);
    printf("Enter price of the cat : ");
    scanf("%f",&c.price);
    printf("Enter height of the cat in Feet : ");
    scanf("%f",&c.height);
    printf("Enter the age of the cat : ");
    scanf("%d",&c.age);


    printf("Name of the cat     : %s",c.name);
    printf("\nColour of the cat : %s",c.colour);
    printf("\nprice of the cat  : %.2f",c.price);
    printf("\nHeight of the cat : %.2f",c.height);
    printf("\nAge of the cat    :  %d",c.age);
}
