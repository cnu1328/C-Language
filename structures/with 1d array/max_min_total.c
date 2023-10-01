#include <stdio.h>

struct cat
{
    char name[20];
    int price;

};

void main()
{
    struct cat c[20];
    int n;
    printf("Enter the number of cats : ");
    scanf("%d",&n);
    read(c,n);
    print(c,n);
    tp(c,n);
    max(c,n);
    min(c,n);

}
void read(struct cat c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter cat name :");
        scanf("%s",c[i].name);
        printf("Enter cat price : ");
        scanf("%d",&c[i].price);
    }
}
void print(struct cat c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("cat name : %s\n",c[i].name);
        printf("Cat price : %d\n",c[i].price);

    }
}
void tp(struct cat c[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s+=c[i].price;
    }
    printf("%d",s);
}
void max(struct cat c[],int n)
{
    int max=c[0].price,index=0,i;
    for(i=1;i<n;i++)
    {
        if(c[i].price>max)
        {
            max=c[i].price;
            index=i;
        }
    }
    printf("%d\n%d",max,index);
}
void min(struct cat c[],int n)
{
    int min=c[0].price,index=0,i;
    for(i=1;i<n;i++)
    {
        if(c[i].price<min)
        {
            min=c[i].price;
            index=i;
        }

    }
    printf("%d\n%d",min,index);
}



