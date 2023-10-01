#include <stdio.h>

void main()
{
    int a[10][10],i,j,m1,n1,b[10][10];
    printf("Enter rows and columns of 2d array : ");
    scanf("%d%d",&m1,&n1);
    printf("Enter %dx%d values in an array : ",m1,n1);
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);

    }
    printf("Given matrix : ");
    for(i=0;i<m1;i++)
    {
        printf("\n");
        for(j=0;j<n1;j++)
        {
            printf("%d  ",a[i][j]);
        }
    }
    printf("\nTranspose matrix : ");
    for(i=0;i<m1;i++)
    {
        printf("\n");
        for(j=0;j<n1;j++)
        {
            printf("%d  ",a[j][i]);
        }
    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("\nTranspose of given matrix is : ");
    for(i=0;i<n1;i++)
    {
        printf("\n");
        for(j=0;j<m1;j++)
            printf("%d  ",b[i][j]);
    }
    int f=0;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++);
        {
            if(b[i][j]!=a[i][j])
                f=1;
        }
    }
    if(f==0)
        printf("\nGiven matrix is a symmetric matrix");
    else
        printf("\nGiven matrix is not a symmetric matrix");
}
