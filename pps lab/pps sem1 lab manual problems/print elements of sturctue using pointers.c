//4.	Write a program to print the elements of a structure using pointers.
#include <stdio.h>
#include <string.h>
struct cat{
    char name[20];
    float price;
};

void main()
{
    struct cat *pc;
    pc = (struct cat*)malloc(1*sizeof(struct cat));
    printf("Enter cat name : ");
    scanf("%s",pc->name);
    printf("Enter cat price : ");
    scanf("%f",&pc->price);

    printf("\nStructure elements : ");
    printf("\nCat name : %s",pc->name);
    printf("\nCat price : %.2f",pc->price);

}
