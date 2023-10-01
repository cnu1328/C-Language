#include <stdio.h>

struct cat
{
    char name[20];
    int price;
};

void main()
{
    struct cat c;
    struct cat *pc;
    pc=&c;
    printf("Enter cat name : ");
    scanf("%s",pc->name);
    printf("Enter price of cat : ");
    scanf("%d",&pc->price);
    printf("Name of the cat : %s\n",pc->name);
    printf("Price of the cat : %d",pc->price);

}

