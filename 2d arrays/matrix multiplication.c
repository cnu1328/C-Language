#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],m1,n1,m2,n2,i,j,k,c[10][10];
    printf("Enter rows and columns of first array : ");
    scanf("%d%d",&m1,&n1);
    printf("Enter rows and columns of second array : ");
    scanf("%d%d",&m2,&n2);
    if(n1==m2)
    {
        printf("Enter %dx%d elements in a array : ",m1,n1);
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                scanf("%d",&a[i][j]);
        }
        printf("Enter %dx%d elements in a array : ",m2,n2);
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                scanf("%d",&b[i][j]);
        }
        printf("First matrix values : ");
        for(i=0;i<m1;i++)
        {
            printf("\n");
            for(j=0;j<n1;j++)
                printf("%d   ",a[i][j]);
        }
        printf("\nSecond matrix values : ");
        for(i=0;i<m2;i++)
        {
            printf("\n");
            for(j=0;j<n2;j++)
                printf("%d    ",a[i][j]);
        }

        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                c[i][j]=0;
                for(k=0;k<n1;k++)
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }


        }
        printf("\nMatrix multiplication of given two matrices is : ");
        for(i=0;i<m1;i++)
        {
            printf("\n");
            for(j=0;j<n2;j++)
                printf("%d  ",c[i][j]);

        }
    }
    else
        printf("For matrix multiplication >> column of first matrix equal to row of second matrix.");
}
