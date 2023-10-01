#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **a,m,n,i,j;
    printf("Enter rows and columns : ");
    scanf("%d%d",&m,&n);
    a = (int**)malloc(m*sizeof(int*));
    for(i=0;i<n;i++)
        a[i]=(int*)malloc(n*sizeof(int));
    printf("Enter array values : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d   ",*(*(a+i)+j));
    }
}
