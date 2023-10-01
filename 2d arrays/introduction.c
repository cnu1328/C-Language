
#include <stdio.h>

void main()
{
    int a[10][10],m,n,i,j;
    printf("Enter rows and columns of an array : ");
    scanf("%d%d",&m,&n);
    printf("Enter the %dx%d array values : ",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d  ",a[i][j]);
    }

}
