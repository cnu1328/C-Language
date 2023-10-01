#include <stdio.h>

struct cat
{
    char name[20];
    int price;
};

/*void main()
{
    struct cat c;
    read(c);
    print(c);
}
void read(struct cat c)
{
    printf("Enter name of the cat : ");
    scanf("%s",c.name);
    printf("Enter price of the cat : ");
    scanf("%d",&c.price);
}

void print(struct cat c)
{
    printf("Name of the cat : %s",c.name);
    printf("\nPrice of the cat : %d",c.price);
}*/
void read(struct cat c[], int n);
void print(struct cat c[], int n);
void main()
{
    struct cat c[10];
    int n;
    printf("Enter number of cats : ");
    scanf("%d",&n);
    read(c,n);
    print(c,n);
    tprice(c,n);
    max(c,n);
    min(c,n);


}

void read(struct cat c[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter cat %d name : ",i+1);
        scanf("%s",c[i].name);
        printf("Enter cat %d price : ",i+1);
        scanf("%d",&c[i].price);
    }
}
void print(struct cat c[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nCAT %d DETAILS\n",i+1);
        printf("Cat %d name : %s ",i+1,c[i].name);
        printf("\nCat %d price : %d\n",i+1,c[i].price);
    }
}

void tprice(struct cat c[],int n)
{
    int i,tprice=0;
    for(i=0;i<n;i++)
    {
        tprice += c[i].price;
    }
    printf("Total price of the cats in the shop is %d",tprice);
}

void max(struct cat c[],int n)
{
    int i,max=c[0].price;
    for(i=1;i<n;i++)
    {
        if(c[i].price>max)
            max=c[i].price;
    }
    printf("Max price of the shop is %d\n",max);
}

void min(struct cat c[],int n)
{
    int i,min=c[0].price;
    for(i=1;i<n;i++)
    {
        if(c[i].price<min)
            min=c[i].price;
    }
    printf("Max price of the shop is %d\n",min);
}
