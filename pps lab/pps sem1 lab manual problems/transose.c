//transpose matrix
#include <stdio.h>

void main()
{
    int r1,c1;
    printf("Enter row and column of the first matrix : ");
    scanf("%d%d",&r1,&c1);

    int a[r1][c1],b[r1][c1],i,j;

    printf("Enter your first matrix values : ");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            b[j][i]=a[i][j];
    }
    printf("Your transpose matrix is : ");
    for(i=0;i<r1;i++)
    {
        printf("\n");
        for(j=0;j<c1;j++)
            printf("%d  ",b[i][j]);
    }




}

