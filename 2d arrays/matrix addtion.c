#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],m1,n1,m2,n2,i,j,c[10][10];
    printf("Enter rows and columns of first array : ");
    scanf("%d%d",&m1,&n1);
    printf("Enter rows and columns of second array : ");
    scanf("%d%d",&m2,&n2);
    if(m1==m2 && n1==n2)
    {
        printf("Enter %dx%d values of first array values : ",m1,n1);
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                scanf("%d",&a[i][j]);
        }

        printf("Enter %dx%d values of second array values : ",m2,n2);
        for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
                scanf("%d",&b[i][j]);
        }
        printf("First matrix values : ");
        for(i=0;i<m1;i++)
        {
            printf("\n");
            for(j=0;j<n1;j++)
                printf("%d  ",a[i][j]);
        }
        printf("\nsecond matrix values : ");
        for(i=0;i<m1;i++)
        {
            printf("\n");
            for(j=0;j<n1;j++)
                printf("%d  ",b[i][j]);
        }


        printf("\nSubtraction of resultant matrix is : ");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                c[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
        //printing resultant matrix values
        for(i=0;i<m1;i++)
        {
            printf("\n");
            for(j=0;j<n1;j++)
                printf("%d ",c[i][j]);
        }
    }


    else
        printf("For matrix addition rows of first matrix and rows of second matrix");

}

