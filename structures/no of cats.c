#include <stdio.h>

struct cat
{
    char name[20],colour[20];
    float height,price;
    int age;
};

void main()
{
    struct cat c[20];
    int n,i;
    printf("Enter number of cats you have : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter your cat %d name : ",i);
        scanf("%s",c[i].name);
        printf("Enter your cat %d colour : ",i);
        scanf("%s",c[i].colour);
        printf("Enter your cat %d price : ",i);
        scanf("%f",&c[i].price);
        printf("Enter your cat %d height : ",i);
        scanf("%f",&c[i].height);
        printf("Enter your cat %d  age : ",i);
        scanf("%d",&c[i].age);
        printf("\n");
    }

    printf("ALL THE CATS DETAILS IN THE PETSHOP\n\n");
    for(i=1;i<=n;i++)
    {
        printf("\nCAT %d DETAILS : \n",i);
        printf("\nName of the cat %d     : %s",i,c[i].name);
        printf("\nColour of the cat %d : %s",i,c[i].colour);
        printf("\nprice of the cat %d  : %.2f",i,c[i].price);
        printf("\nHeight of the cat %d : %.2f",i,c[i].height);
        printf("\nAge of the cat %d    :  %d",i,c[i].age);
        printf("\n");
    }
}
