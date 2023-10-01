#include <stdio.h>
#include <stdlib.h>

struct cat
{
    char name[20];
    int price;
};

void main()
{
    struct cat *pc;
    int n,i;
    printf("Enter number of cats you enter : ");
    scanf("%d",&n);
    pc = (struct cat*)malloc(n*sizeof(struct cat));
    for(i=0;i<n;i++)
    {
        printf("Enter cat %d name : ",i+1);
        scanf("%s",(pc+i)->name);
        printf("Enter cat %d price : ",i+1);
        scanf("%d",&(pc+i)->price);

    }
    for(i=0;i<n;i++)
    {
        printf("\nCAT %d DETAILS\n",i+1);
        printf("Name of the cat %d : %s\n",i+1,pc[i].name);
        printf("Price of the cat %d : %d\n",i+1,pc[i].price);
    }
}
