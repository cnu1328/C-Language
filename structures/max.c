#include <stdio.h>

struct fish
{
    char name[20],colour[20];
    float price;
};


void main()
{
    struct fish f[20];
    int n,i,index;
    float max;
    printf("Number of fishes you have in the store : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter fish %d name : ",i);
        scanf("%s",f[i].name);
        printf("Enter fish %d colour : ",i);
        scanf("%s",f[i].colour);
        printf("Enter fish %d price : ",i);
        scanf("%f",&f[i].price);
        printf("\n");
    }
    max = f[0].price;
    index=0;
    for(i=1;i<n;i++)
    {
        if(max<f[i].price)
        {
            max = f[i].price;
            index = i;
        }
    }
    printf("%.2f%s",max,f[index].name);


}
