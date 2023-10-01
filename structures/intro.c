#include <stdio.h>


struct dog
{
    char name[20],colour[20];
    float price,height;
    int age;
};


void main()
{
    struct dog d;
    printf("Enter Dog name : ");
    scanf("%s",d.name);
    printf("For which colour are you checking : ");
    scanf("%s",d.colour);
    printf("How much cost you will pay : ");
    scanf("%f",&d.price);
    printf("What is the height of the dog in feets : ");
    scanf("%f",&d.height);
    printf("Enter the age of the dog : ");
    scanf("%d",&d.age);


    printf("\nName of the dog    : %s",d.name);
    printf("\nColour of the dog  : %s",d.colour);
    printf("\nPrice of the dog   : %.2f ",d.price);
    printf("\nHeight of the dong : %.2f",d.height);
    printf("\nAge of the dog     : %d",d.age);

}

