#include <stdio.h>

struct cat
{
    char name[20];
    int price;

};

void main()
{
    struct cat c;
    read(c);
    print(c);
}

void read(struct cat c)
{
    scanf("%s",c.name);
    scanf("%d",&c.price);
}

void print(struct cat c)
{
    printf("%s",c.name);
    printf("\n%d",c.price);
}
