#include <stdio.h>

struct dog
{
    char name[20],colour[20];
    float price,height;
    int age;
};
struct cat
{
    char name[20],colour[20];
    float price,height;
    int age;
};
struct petshop
{
    struct dog d[10];
    struct cat c[10];
};

void main()
{
    struct petshop p;
    int nd,nc,i;
    printf("Enter number of cats : ");
    scanf("%d",&nc);
    printf("Enter number of dogs : ");
    scanf("%d",&nd);

    for(i=0;i<nc;i++)
    {

        printf("Enter cat %d name : ",i+1);
        scanf("%s",p.c[i].name);
        printf("Enter cat %d colour : ",i+1);
        scanf("%s",p.c[i].colour);
        printf("Enter cat %d price : ",i+1);
        scanf("%f",&p.c[i].price);
        printf("Enter cat %d height : ",i+1);
        scanf("%f",&p.c[i].height);
        printf("Enter cat %d age : ",i+1);
        scanf("%d",&p.c[i].age);
        printf("\n");
    }

    for(i=0;i<nd;i++)
    {
        printf("Enter dog %d name : ",i+1);
        scanf("%s",p.d[i].name);
        printf("Enter dog %d colour : ",i+1);
        scanf("%s",p.d[i].colour);
        printf("Enter dog %d price : ",i+1);
        scanf("%f",&p.d[i].price);
        printf("Enter dog %d height : ",i+1);
        scanf("%f",&p.d[i].height);
        printf("Enter dog %d age : ",i+1);
        scanf("%d",&p.d[i].age);
    }

    /*for(i=0;i<nc;i++)
    {
        printf("\nCAT DETAILS\n");
        printf("\nCat %d name   : %s",i+1,p.c[i].name);
        printf("\nCat %d colour : %s",i+1,p.c[i].colour);
        printf("\nCat %d price  : %.2f",i+1,p.c[i].price);
        printf("\nCat %d height : %.2f",i+1,p.c[i].height);
        printf("\nCat %d age    : %d",i+1,p.c[i].age);

    }

    for(i=0;i<nd;i++)
    {
        printf("\n");
        printf("\nDOG DETAILS\n");
        printf("\nCat %d name   : %s",i+1,p.d[i].name);
        printf("\nCat %d colour : %s",i+1,p.d[i].colour);
        printf("\nCat %d price  : %.2f",i+1,p.d[i].price);
        printf("\nCat %d height : %.2f",i+1,p.d[i].height);
        printf("\nCat %d age    : %d",i+1,p.d[i].age);
    }*/
    printf("Enter your option 1. for cat, 2. for dog, 3. for exit");
    int ch;
    scanf("%d",&ch);
    char breed;
    float price;
    switch(ch)
    {
    case 1:
    {
        /*for(i=0;i<nc;i++)
        {
            printf("\nCAT DETAILS\n");
            printf("\nCat %d name   : %s",i+1,p.c[i].name);
            printf("\nCat %d colour : %s",i+1,p.c[i].colour);
            printf("\nCat %d price  : %.2f",i+1,p.c[i].price);
            printf("\nCat %d height : %.2f",i+1,p.c[i].height);
            printf("\nCat %d age    : %d",i+1,p.c[i].age);
        }*/
        printf("Enter a searching cat name : ");
        scanf("%s",breed);
        printf("Enter range of the price you want : ");
        scanf("%f",&price);
        for(i=0;i<nc;i++)
        {
            int f=0;
            if(p.c[i].name==breed && p.c[i].price<=price)
            {
                f=1;
            }
            if(f=1)
                printf("Your searching cat is availabe %s",p.c[i].name);
        }
        break;
    }
    case 2:
    {
        for(i=0;i<nd;i++)
        {
            printf("\n");
            printf("\nDOG DETAILS\n");
            printf("\nCat %d name   : %s",i+1,p.d[i].name);
            printf("\nCat %d colour : %s",i+1,p.d[i].colour);
            printf("\nCat %d price  : %.2f",i+1,p.d[i].price);
            printf("\nCat %d height : %.2f",i+1,p.d[i].height);
            printf("\nCat %d age    : %d",i+1,p.d[i].age);
        }
        break;
    }
    default:
        break;
    }
}
