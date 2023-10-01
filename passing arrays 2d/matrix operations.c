#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],m1,m2,n1,n2;
    printf("Enter rows and columns of the first matrix : ");
    scanf("%d%d",&m1,&n1);
    printf("Enter the values of first matrix : ");
    read(a,m1,n1);
    printf("Enter rows and columns of the second matrix : ");
    scanf("%d%d",&m2,&n2);
    printf("Enter the values of second matrix : ");
    read(b,m2,n2);
    trans(a,c,m1,n1);
    if(m1==m2 && n1==n2)
    {
        add(a,b,c,m1,n1);
        sub(a,b,c,m1,n1);
    }
    else
        printf("matrix addition is not possible because rows itself and column itself not equal with first and second matrix");
    if(m2==n1)
        mul(a,b,c,m1,m2,n1,n2);
    else
        printf("Matrix multiplication is not possible.");


}
int read(int a[][10],int m1,int n1)
{
    int i,j;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
    }
}
int trans(int a[][10],int c[][10],int m1, int n1)
{
    int i,j;
    printf("Given matrix is :\n");
    for(i=0;i<m1;i++)
    {
        printf("\n");
        for(j=0;j<n1;j++)
            printf("%d  ",a[i][j]);
    }


    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            c[j][i]=a[i][j];
    }
    printf("\nYour transpose matrix is : ");
    for(i=0;i<m1;i++)
    {
        printf("\n");
        for(j=0;j<n1;j++)
            printf("%d  ",c[i][j]);
    }
}
int add(int a[][10],int b[][10],int c[][10],int m1,int n1)
{
    int i,j;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            c[i][j]=a[i][j]+b[i][j];
    }

    printf("\nYour addition matrix is : ");
    for(i=0;i<m1;i++)
    {
        printf("\n");
        for(j=0;j<n1;j++)
            printf("%d   ",c[i][j]);
    }
}

int sub(int a[][10],int b[][10],int c[][10],int m1,int n1)
{
    int i,j;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            c[i][j]=a[i][j]-b[i][j];
    }
    printf("\nYour subtraction matrix is : ");
    for(i=0;i<m1;i++)
    {
        printf("\n");
        for(j=0;j<n1;j++)
            printf("%d  ",c[i][j]);
    }
}

int mul(int a[][10],int b[][10],int c[][10],int m1,int m2,int n1,int n2)
{
    int i,j,k;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(k=0;k<n1;k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    }
    printf("\nYour multiplicative matrix is : ");
    for(i=0;i<m1;i++)
    {
        printf("\n");
        for(j=0;j<n2;j++)
            printf("%d   ",c[i][j]);

    }
}
