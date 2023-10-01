#include <stdio.h>

struct cat
{
    char name[20],colour[20];
    float height;
    int age,price;
};

void main()
{
    struct cat c;
    printf("Enter cat name : ");
    scanf("%s",c.name);
    printf("Enter cat colour : ");
    scanf("%s",c.colour);
    printf("Enter cat price : ");
    scanf("%d",&c.price);
    printf("Enter cat height : ");
    scanf("%f",&c.height);
    printf("Enter cat age : ");
    scanf("%d",&c.age);

    printf("Enter your cat name to search : ");
    char sname[20];
    int sprice;
    scanf("%s",sname);
    printf("Enter your cat prize : ");
    scanf("%d",&sprice);

    if(c.name==sname && c.price<=sprice)
        printf("Your search is available");
    else
        printf("Your search is unavailable");

}
